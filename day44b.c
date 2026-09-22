//Q88: Replace spaces with hyphens in a string.

#include <stdio.h>
int main()
{
    int i;
    char word[25];
    printf("Enter word: ");
    fgets(word,sizeof(word),stdin);
    for(i=0;word[i]!='\n';i++)
    {
        if(word[i]==' ')
        {
            word[i]='-';
        }
    }
    puts(word);
    return 0;
}