//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>
int main()
{
    char date[15];
    int i;
    fgets(date,sizeof(date),stdin);
    printf("%c%c-Apr-",date[0],date[1]);
    for(i=6;date[i]!='\n';i++)
    {
        printf("%c",date[i]);
    }
    return 0;
}