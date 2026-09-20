//Q83: Count vowels and consonants in a string.

#include <stdio.h>
int main()
{
    char word[10];
    int v=0,c=0;
    printf("Enter word: ");
    fgets(word,sizeof(word),stdin);
    for(int i=0;word[i]!='\n';i++)
    {
        if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u')
        v++;
        else
        c++;
    }
    printf("Vowels=%d, Consonants=%d",v,c);
    return 0;
}