/*Q114: Write a program to take a string s as input.
Find the length of the longest substring without
repeating characters.*/

#include<stdio.h>
int main()
{
    char str[100];
    int i,j,k,count,large=0,found;
    printf("Enter string: ");
    scanf("%s",str);
    for(i=0;s[i]!='\0';i++)
    {
        count=0;
        for(j=i;s[j]!='\0';j++)
        {
            found=0;
            for(k=i;k<j;k++)
            {
                if(s[j]==s[k])
                {
                    found=1;
                    break;
                }
            }
            if(found==1)
            {
                break;
            }
            count++;
        }
        if(count>large)
        {
            large=count;
        }
    }
    printf("%d",large);
    return 0;
}