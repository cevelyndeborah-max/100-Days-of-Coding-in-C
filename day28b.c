//Q56: Read and print elements of a one-dimensional array.

/*
Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30

Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5

*/
#include <stdio.h>
int main()
{
    int i,j,k;
    printf("Enter number of variables: ");
    scanf("%d",&i);
    int a[i];
    printf("Enter elements of array: ");
    for(j=0;j<i;j++)
    {
        scanf("%d",&a[j]);    
    }
    for(j=0;j<i;j++)
    {
        printf("%d ",a[j]);
    }
    return 0;
}