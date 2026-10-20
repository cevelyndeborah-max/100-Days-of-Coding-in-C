/*Q118: Write a program to take an input array of size n.
The array should contain all the integers between 0 to n
except for one. Print that missing number.*/

#include<stdio.h>
int main()
{
    int n,i,k,found=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(k=0;k<=n;k++)
    {
        found=0;
        for(i=0;i<n;i++)
        {
            if(k==arr[i])
            {
                found=1;
                break;
            }
        }
        if(found==0)
        {
            printf("%d",k);
            break;
        }
    }
    return 0;
}