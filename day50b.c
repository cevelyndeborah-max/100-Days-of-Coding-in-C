//Q100: Print all sub-strings of a string.

#include <stdio.h>
int main()
{
    char word[25];
    int i,j,k,count=0;
    fgets(word,sizeof(word),stdin);
    for(i=0;word[i]!='\n';i++)
    {
        count++;
    }
    for(i=0;i<count;i++)
    {
        for(j=i;j<count;j++)
        {
            for(k=i;k<=j;k++)
            {
                printf("%c",word[k]);
            }
            if(!(i==count-1&&j==count-1))
            {
                printf(",");
            }
        }
    }

    return 0;
}