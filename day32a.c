//Q63: Merge two arrays.

#include <stdio.h>
int main()
{
    int a,b,i,j,l,c;
    printf("Enter no of elements in arr 1: ");
    scanf("%d",&a);
    int arr1[a];
    printf("Enter elements of arr1:");
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter no of elements in arr 2:  ");
    scanf("%d",&b);
    int arr2[b];
    printf("Enter elements of arr1:");
    for(j=0;j<b;j++)
    {
        scanf("%d",&arr2[j]);
    }
    int k=a+b;
    int arr[k];
    for(l=0;l<a;l++)
    {
        arr[l]=arr1[l];
    }
    for(j=0;l<k;j++,l++)
    {
        arr[l]=arr2[j];
    }
    for(c=0;c<k;c++)
    {
        printf("%d ",arr[c]);
    }
    return 0;
}