//Q84: Convert a lowercase string to uppercase without using built-in functions.

#include <stdio.h>
int main()
{
    char word[55];
    printf("Enter word: ");
    fgets(word,sizeof(word),stdin);
    for(int i=0;word[i]!='\n';i++)
    {
        if(word[i]<123&&word[i]>96)
        word[i]=word[i]-32;
    }
    puts(word);
    return 0;
}