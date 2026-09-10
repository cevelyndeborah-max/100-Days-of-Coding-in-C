//Q64: Find the digit that occurs the most times in an integer number.

#include <stdio.h>
int main()
{
    int n,max,a,j,b;
    int arr[10]={0};
    printf("Enter n: ");
    scanf("%d",&n);
    while(n>0)
    {
        a=n%10;
        arr[a]++;
        n=n/10;
    }
    max=arr[9];
    for(j=9;j>=0;j--)
    {
        if(max<=arr[j])
        {
            max=arr[j];
            b=j;
        }
    }
    printf("%d",b);
    return 0;
}