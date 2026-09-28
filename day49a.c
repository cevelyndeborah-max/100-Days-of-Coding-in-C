//Q97: Print the initials of a name.

#include <stdio.h>
int main()
{
    char name[50];
    int i;
    fgets(name,sizeof(name),stdin);
    printf("%c.",name[0]);

    for(i=0;name[i]!='\n';i++)
    {
        if(name[i]==' '&&name[i+1]!=' ')
        {
            printf("%c.",name[i+1]);
        }
    }
    return 0;
}