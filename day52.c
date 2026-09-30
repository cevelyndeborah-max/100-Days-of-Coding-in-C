/*Q102: Write a Program to take a sorted array arr[] and an integer x as input, 
find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it.
This element is called the ceil of x. If such an element does not exist, print -1. 
Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.*/

#include <stdio.h>
int main()
{
    int i,a,b,c,found=0;
    printf("Enter the number of elements: ");
    scanf("%d",&a);
    int arr[a];
    printf("Enter elements: ");
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter integer: ");
    scanf("%d",&b);
    for(i=a-1;i>=0;i--)
    {
        if(arr[i]>=b)
        {
            c=i;
            found=1;
        }
    }
    if(found==1)
    {
        printf("%d",c);
    }
    else
    {
    printf("-1");    
    }
    return 0;
}