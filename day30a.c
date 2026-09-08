//Q59: Count even and odd numbers in an array.

#include <stdio.h>
int main()
{
    int i,j,odd,even;
    even = 0;
    odd = 0;
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
        if(arr[j] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Even=%d, Odd=%d", even, odd);
    return 0;
}