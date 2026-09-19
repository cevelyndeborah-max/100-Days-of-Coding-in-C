//Q81: Count characters in a string without using built-in length functions.

#include <stdio.h>
int main()
{
    int count=0;
    char word[10];
    printf("Enter word: ");
    fgets(word,sizeof(word),stdin);
    for(int i=0;word[i]!='\n';i++)
    {
        count++;
    }
    printf("%d",count);
    return 0;
}