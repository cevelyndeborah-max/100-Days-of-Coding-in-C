//Q67: Insert an element in an array at a given position.
#include <stdio.h>
int main()
{
    int i,n,a,b,temp;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Which index you want to enter and what?");
    scanf("%d%d",&a,&b);
    arr[n]=arr[n+1];
    for(i=n;i>=a;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[a]=b;
    for(int j=0;j<=n;j++)
    {
        printf("%d ",arr[j]);
    }
    return 0;
}