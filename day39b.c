//Q78: Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>
int main()
{
    int r,c,i,j,sum=0;
    printf("Enter no of rows and columns: ");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    printf("Enter elements of arr: ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0,j=0;i<r,j<c;i++,j++)
    {
        sum=sum+arr[i][j];
    }
    printf("%d",sum);
    return 0;
}