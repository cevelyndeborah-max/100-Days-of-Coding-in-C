//Q96: Reverse each word in a sentence without changing the word order.

#include <stdio.h>
int main()
{
    char word[50],temp;
    int i,start=0,end;

    fgets(word,sizeof(word),stdin);

    for(i=0;word[i]!='\0';i++)
    {
        if(word[i]==' '||word[i]=='\n')
        {
            end=i-1;

            while(start<end)
            {
                temp=word[start];
                word[start]=word[end];
                word[end]=temp;

                start++;
                end--;
            }

            start=i+1;
        }
    }

    printf("%s",word);

    return 0;
}