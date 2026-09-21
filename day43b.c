//Q86: Check if a string is a palindrome.

#include <stdio.h>
int main()
{
    int i,count=0,turn,yes=0;
    char word[25],temp;
    char words[25];
    printf("Enter word: ");
    fgets(word,sizeof(word),stdin);
    for(i=0;word[i]!='\n';i++)
    {
        words[i]=word[i];
    }
    for(i=0;word[i]!='\n';i++)
    {
        count++;
    }
    turn=(count-1)/2;
    for(i=0;i<=turn;i++)
    {
        temp=word[i];
        word[i]=word[(count-1)-i];
        word[(count-1)-i]=temp;
    }
    for(i=0;word[i]!='\n';i++)
    {
        if(word[i]!=words[i])
        {
            yes=1;
            printf("Non Palindrome");
            break;
        }
    }
    if(yes!=1)
    printf("Palindrome");
    return 0;
}