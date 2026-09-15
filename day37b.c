//Q74: Find the transpose of a matrix.

#include <stdio.h>
int main()
{
    int r,c,i,j,a,b;
    printf("Enter no of rows and columns: ");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    int arrt[c][r];
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
            arrt[j][i]=arr[i][j];
        }
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d ",arrt[i][j]);
        }
        printf("\n");
    }
    return 0;
}