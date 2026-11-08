//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>
#include <string.h>
enum R{ADMIN,USER,GUEST};
int main()
{
    enum R role;
    char r[10];
    scanf("%s",r);
    if(strcmp(r,"ADMIN")==0)
    {
        role=ADMIN;    
    }
    else if(strcmp(r,"USER")==0)
    {
        role=USER;    
    }
    else if(strcmp(r,"GUEST")==0)
    {
        role=GUEST;    
    }
    switch(role)
    {
        case ADMIN:
        {
            printf("Welcome Admin!");
            break;
        }
        case USER:
        {
            printf("Welcome User!");
            break;
        }
        case GUEST:
        {
            printf("Welcome Guest!");
            break;
        }
        
    }

    return 0;
}