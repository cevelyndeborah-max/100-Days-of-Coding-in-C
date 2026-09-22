//Q87: Count spaces, digits, and special characters in a string.

#include <stdio.h>
int main()
{
    int i,space=0,digit=0,special=0,alpha=0;
    char word[25];
    printf("Enter word: ");
    fgets(word,sizeof(word),stdin);
    for(i=0;word[i]!='\n';i++)
    {
        if(word[i]==32)
        {
            space++;
        }
        else if(word[i]>96&&word[i]<123||word[i]<91&&word[i]>64)
        {
            alpha++;
        }
        else if(word[i]>47&&word[i]<58)
        {
            digit++;
        }
        else
        {
            special++;
        }
    }
    printf("Spaces=%d, Digits=%d, Special=%d",space,digit,special);
    return 0;
}