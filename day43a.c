//Q85: Reverse a string.

#include <stdio.h>
int main()
{
    int i,count=0,turn;
    char word[25],temp;
    printf("Enter word: ");
    fgets(word,sizeof(word),stdin);
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
        printf("%c",word[i]);
    }
    return 0;
}