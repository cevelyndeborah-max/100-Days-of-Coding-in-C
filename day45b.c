//Q90: Toggle case of each character in a string.

#include <stdio.h>
int main()
{
    char word[25];
    printf("Enter word: ");
    fgets(word,sizeof(word),stdin);
    for(int i=0;word[i]!='\n';i++)
    {
        if(word[i]>64&&word[i]<91)
        {
            word[i]=word[i]+32;    
        }
        else if(word[i]>96&&word[i]<123)
        {
            word[i]=word[i]-32;    
        }
    }
    puts(word);
    return 0;
}