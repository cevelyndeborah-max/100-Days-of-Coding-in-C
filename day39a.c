//Q77: Check if the elements on the diagonal of a matrix are distinct.

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
    for(i=1,j=1;i<r,j<c;i++,j++)
    {
        if(arr[0][0]==arr[i][j])
        {
            printf("False");
            break;
        }
    }
    if(arr[0][0]!=arr[i][j])
    {
        printf("True");
    } 
    return 0;
}