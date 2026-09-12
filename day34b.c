//Q68: Delete an element from an array.

#include <stdio.h>
int main()
{
    int i,n,a;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Which index you want to delete: ");
    scanf("%d",&a);
    for(i=a;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n]=arr[n-1];
    for(int j=0;j<n-1;j++)
    {
        printf("%d ",arr[j]);
    }
    return 0;
}