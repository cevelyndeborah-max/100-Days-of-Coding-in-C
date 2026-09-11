//Q66: Insert an element in a sorted array at the appropriate position.
#include <stdio.h>
int main()
{
    int i,j,a,b;
    printf("Enter number of elements: ");
    scanf("%d",&i);
    int arr[i+1];
    printf("Enter elements: ");
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
    }
    printf("What number do you want to add: ");
    scanf("%d",&a);
    for(b=0;b<i;b++)
    {
        if(arr[b]>a)
        {
            break;
        }
    }
    for(j=i;j>b;j--)
    {
        arr[j]=arr[j-1];
    }
    arr[b]=a;
    for(j=0;j<i+1;j++)
    {
        printf("%d ",arr[j]);
    }
    return 0;
}