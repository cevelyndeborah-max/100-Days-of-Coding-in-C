/*Q104: Write a Program to take a positive integer n as input,
and find the pivot integer x such that the sum of all elements 
between 1 and x inclusively equals the sum of all elements between 
x and n inclusively. Print the pivot integer x. If no such integer exists,
print -1. Assume that it is guaranteed that there will be at most one
pivot integer for the given input.*/

#include<stdio.h>
int main()
{
    int a,b,i,ts=0,rs=0,found=0,ls;
    printf("Enter number : ");
    scanf("%d",&a);
    int arr[a];
    b=a;
    for(i=b-1;i>=0;i--)
    {
        arr[i]=b;
        b=b-1;
        ts=ts+arr[i];
    }
    for(i=a-1;i>=0;i--)
    {
        rs=rs+arr[i];
        ls=ts-rs+arr[i];
        if(rs==ls)
        {
            found=1;
            a=arr[i];
        }
    }
    if(found==1)
    printf("%d",a);
    else
    printf("-1");
    
}