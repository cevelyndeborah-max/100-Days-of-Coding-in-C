//Q140: Define a struct with enum Gender and print person's gender.

#include <stdio.h>
#include<string.h>
enum gender{MALE,FEMALE};
struct category
{
    enum gender g;
};
int main()
{
    char cat[10];
    struct category c;
    printf("Gender=");
    scanf("%s",cat);
    if(strcmp(cat,"MALE")==0)
    {
        c.g=MALE;
    }
    else if(strcmp(cat,"FEMALE")==0)
    {
        c.g=FEMALE;
    }
    switch(c.g)
    {
        case MALE:
        {
            printf("Male");
            break;
        }
        case FEMALE:
        {
            printf("Female");
            break;
        }
    }
    return 0;
}