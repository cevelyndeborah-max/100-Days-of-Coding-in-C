//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

#include <stdio.h>
#include <string.h>
enum S{SUCCESS,FAILURE,TIMEOUT};
int main()
{
    enum S status;
    char stat[10];
    scanf("%s",stat);
    if(strcmp(stat,"SUCCESS")==0)
    {
        status=SUCCESS;    
    }
    else if(strcmp(stat,"FAILURE")==0)
    {
        status=FAILURE;    
    }
    else if(strcmp(stat,"TIMEOUT")==0)
    {
        status=TIMEOUT;    
    }
    switch(status)
    {
        case SUCCESS:
        {
            printf("Operation finished");
            break;
        }
        case FAILURE:
        {
            printf("Operation failed");
            break;
        }
        case TIMEOUT:
        {
            printf("Time is Over");
            break;
        }
        
    }

    return 0;
}