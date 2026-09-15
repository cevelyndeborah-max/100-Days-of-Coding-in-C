//Q73: Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>
int main()
{
    int r,c,i,j,k,sum=0;
    printf("Enter no of rows and columns: ");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    int arrf[r];
    printf("Enter the elements: ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum=sum+arr[i][j];
        }
        arrf[i]=sum;
        sum=0;
    }
    for(k=0;k<r;k++)
    {
        printf("%d ",arrf[k]);
    }
    return 0;
}
