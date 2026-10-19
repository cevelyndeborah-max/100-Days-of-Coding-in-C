/*Q117: Write a program to take two sorted arrays of size m and n
as input. Merge both arrays such that the merged array is also
sorted. Print the merged array.*/

#include<stdio.h>
int main()
{
    int m,n,i,j,temp;
    printf("Enter m: ");
    scanf("%d",&m);
    printf("Enter n: ");
    scanf("%d",&n);
    int arr1[m],arr2[n],arr3[m+n];
    printf("Enter first array: ");
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter second array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<m;i++)
    {
        arr3[i]=arr1[i];
    }
    for(i=0;i<n;i++)
    {
        arr3[m+i]=arr2[i];
    }
    for(i=0;i<m+n-1;i++)
    {
        for(j=i+1;j<m+n;j++)
        {
            if(arr3[i]>arr3[j])
            {
                temp=arr3[i];
                arr3[i]=arr3[j];
                arr3[j]=temp;
            }
        }
    }
    for(i=0;i<m+n;i++)
    {
        printf("%d ",arr3[i]);
    }
    return 0;
}