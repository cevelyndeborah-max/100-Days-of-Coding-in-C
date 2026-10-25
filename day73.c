/*Q123: Read a text file and count the total number of characters, words, and lines.
 A word is defined as a sequence of non-space characters separated by spaces or newlines.*/

#include<stdio.h>
int main(){
    FILE *fp;
    char ch;
    int characters=0,words=0,lines=1;
    int inword=0;
    fp=fopen("sample.txt","r");
    while((ch=fgetc(fp))!=EOF)
    {
        characters++;
        if(ch=='\n')
        {
            lines++;
        }
        if(ch==' ' || ch=='\n')
        {
            inword=0;
        }
        else if(inword==0)
        {
            words++;
            inword=1;
        }
    }
    fclose(fp);
    printf("Characters: %d\n",characters);
    printf("Words: %d\n",words);
    printf("Lines: %d",lines);
    return 0;
}