//Q89: Count frequency of a given character in a string.

#include <stdio.h>
int main()
{
    char word[25];
    char a;
    int count=0;
    printf("Enter word: ");
    fgets(word,sizeof(word),stdin);
    printf("What you want to search: ");
    scanf("%c",&a);
    for(int i=0;word[i]!='\n';i++)
    {
        if(word[i]==a)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}