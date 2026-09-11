//Q65: Search in a sorted array using binary search.
#include <stdio.h>
int main()
{
    int i,a,j,l,h,mid,found;
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
    l=0;
    h=i-1;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(arr[mid]==a)
        {
            found=1;
            break;
        }
        else if(arr[mid]>a)
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    if(found==1)
    printf("Found at index %d",mid);
    else
    printf("-1");
    return 0;
}