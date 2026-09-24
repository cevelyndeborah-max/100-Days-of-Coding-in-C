#include <stdio.h>
int main()
{
    char word[25];
    int found=0;
    printf("Enter word: ");
    fgets(word,sizeof(word),stdin);
    for(int i=0;word[i]!='\n';i++)
    {
        for(int j=i+1;word[j]!='\n';j++)
        {
            if(word[i]==word[j])
            {
                printf("%c",word[i]);
                found=1;
                break;
            }
        }
        if(found==1)
        {
            break;
        }
    }
    return 0;
}