//Q94: Find the longest word in a sentence.
#include <stdio.h>
int main()
{
    char str[100];
    int i,start=0,len=0,maxlen=0,maxstart=0;
    printf("Enter sentence: ");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\n'&&str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            len++;
        }
        else
        {
            if(len>maxlen)
            {
                maxlen=len;
                maxstart=start;
            }
            len=0;
            start=i+1;
        }
    }
    if(len>maxlen)
    {
        maxlen=len;
        maxstart=start;
    }
    for(i=maxstart;i<maxstart+maxlen;i++)
    {
        printf("%c",str[i]);
    }
    return 0;
}