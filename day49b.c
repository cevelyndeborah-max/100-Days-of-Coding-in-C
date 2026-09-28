//Q98: Print initials of a name with the surname displayed in full.

#include <stdio.h>
int main()
{
    char name[50];
    int i,last=0;
    fgets(name,sizeof(name),stdin);

    for(i=0;name[i]!='\n'&&name[i]!='\0';i++)
    {
        if(name[i]==' '&&name[i+1]!=' ')
        {
            last=i;
        }
    }
    printf("%c.",name[0]);
    for(i=0;i<last;i++)
    {
        if(name[i]==' '&&name[i+1]!=' ')
        {
            printf("%c.",name[i+1]);
        }
    }
    printf(" ");
    for(i=last+1;name[i]!='\n'&&name[i]!='\0';i++)
    {
        printf("%c",name[i]);
    }
    return 0;
}