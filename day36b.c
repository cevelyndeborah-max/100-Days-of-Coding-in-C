//Q72: Find the sum of all elements in a matrix. 

#include <stdio.h>
int main() {
    int a,b,i,j,sum=0;
    printf("Enter no of rows and columns: ");
    scanf("%d%d",&a,&b);
    int arr[a][b];
    printf("Enter elements: ");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);                
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            sum=sum+arr[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}


















