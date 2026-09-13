//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/

#include <stdio.h>
int main()
{
    int i,j;
    printf("Enter number of element in array: ");
    scanf("%d",&i);
    int arr[i];
    printf("Enter the elements: ");
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
    }
    int max=arr[0];
    for(j=0;j<i;j++)
    {
        if(arr[j]>max)
        max=arr[j];
    }
    int max2;
    for(j=0;j<i;j++)
    {
        if(arr[j]!=max)
        {
            max2=arr[j];
            break;
        }
    }
    for(j=0;j<i;j++)
    {
        if(arr[j]>max2&&arr[j]!=max)
        max2=arr[j];
    }
    printf("%d",max2);
    return 0;
}