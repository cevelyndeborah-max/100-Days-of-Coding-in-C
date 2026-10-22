//Q120: Write a program to take a string input. Change it to sentence case.

#include<stdio.h>
int main ()
{
    int i;
    char str[100];
    printf("Enter sentence: ");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\n';i++)
    {
        if(str[i]==' '&&str[i+1]>='a'&&str[i+1]<='z')
        {
            str[i+1]=str[i+1]-32;
        }
    }
    printf("%s",str);
    return 0;
}