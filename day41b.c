//Q82: Print each character of a string on a new line.

#include <stdio.h>
int main()
{
    char word[10];
    printf("Enter word: ");
    fgets(word,sizeof(word),stdin);
    for(int i=0;word[i]!='\n';i++)
    {
        printf("%c\n",word[i]);
    }
    return 0;
}