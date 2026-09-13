//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>
int main()
{
    int i,j,k,b;
    printf("Enter number of element in array: ");
    scanf("%d",&i);
    int arr[i];
    int arr1[i];
    printf("Enter the elements: ");
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
        arr1[j]=arr[j];
    }
    printf("Enter k: ");
    scanf("%d",&k);
    for(j=i-k,b=0;j<i;j++,b++)
    {
        arr[b]=arr1[j];
    }
    for(j=0,b=k;j<i-k;j++,b++)
    {
        arr[b]=arr1[j];
    }
    for(j=0;j<i;j++)
    {
        printf("%d ",arr[j]);
    }
    return 0;
}