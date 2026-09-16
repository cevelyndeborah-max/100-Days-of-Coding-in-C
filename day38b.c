//Q76: Check if a matrix is symmetric.

#include <stdio.h>
int main()
{
    int r,c,i,j,a=0;
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
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(arr[i][j]!=arr[j][i])
            {
                printf("False");
                a=1;
                goto true;
            }
        }
    }
    true: 
    if(a!=1)
    {
        printf("True");
    }
    return 0;
}
