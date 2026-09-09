//Q61: Search for an element in an array using linear search.
#include <stdio.h>
int main()
{
    int i,a,j;
    printf("Enter number of elements: ");
    scanf("%d",&i);
    int arr[i];
    printf("Enter elements: ");
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
    }
    printf("What number do you want to search: ");
    scanf("%d",&a);
    for(j=0;j<i;j++)
    {
        if(arr[j]==a)
        {
            printf("Found at index %d",j);
            break;
        }
    }
    if(arr[j-1]!=a)
    printf("-1");
    return 0;
}