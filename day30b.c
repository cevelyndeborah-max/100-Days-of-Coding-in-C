//Q60: Count positive, negative, and zero elements in an array.
#include <stdio.h>
int main()
{
    int i,j,zero,neg,pos;
    zero=0,pos=0,neg= 0;
    
    printf("Enter the number of elements:");
    scanf("%d", &i);
    int arr[i];
    printf("Enter  elements:");
    for(j=0;j<i;j++)
    {
        scanf("%d", &arr[j]);
    }
    for(j=0;j<i;j++)
    {
        if(arr[j]==0)
            zero++;
        else if(arr[j]>0)
            pos++;
        else
            neg++;
    }
    printf("Positive=%d, Negative=%d, Zero=%d",pos,neg,zero);
    return 0;
}