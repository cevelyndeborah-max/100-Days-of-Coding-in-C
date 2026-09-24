//Q91: Remove all vowels from a string.

#include <stdio.h>
int main()
{
    char word[25];
    int j = 0;
    printf("Enter word: ");
    fgets(word, sizeof(word), stdin);
    for(int i=0;word[i]!='\n';i++)
    {
        if(word[i]!='a'&&word[i] != 'e'&&word[i]!='i'&&word[i]!='o'&&word[i]!='u')
        {
            word[j] = word[i];
            j++;
        }
    }
    word[j]='\0';
    puts(word);
    return 0;
}