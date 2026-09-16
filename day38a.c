//Q75: Add two matrices.

#include <stdio.h>
int main()
{
    int r,c,i,j,a,b;
    printf("Enter no of rows and columns: ");
    scanf("%d%d",&r,&c);
    int arr1[r][c];
    printf("Enter elements of arr1: ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        scanf("%d",&arr1[i][j]);
    }
    printf("Enter no of rows and columns: ");
    scanf("%d%d",&a,&b);
    int arr2[a][b];
    printf("Enter elements of arr2: ");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        scanf("%d",&arr2[i][j]);
    }
    int arr[r][c];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        arr[i][j]=arr1[i][j]+arr2[i][j];
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {printf("%d ",arr[i][j]);}
        printf("\n");
    }
    return 0;
}