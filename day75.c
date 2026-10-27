/*Q125: Open an existing file in append mode and allow the user to enter a new line of text.
*/ Append the text at the end without overwriting existing content.

#include<stdio.h>
int main()
{
    FILE *fp;
    char text[100];
    fp=fopen("data.txt","a");
    printf("Enter text: ");
    fgets(text,100,stdin);
    fprintf(fp,"\n%s",text);
    fclose(fp);
    return 0;
}