//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/
/*Q132: Define an enum for traffic lights (RED, YELLOW, GREEN)
and print Stop, Wait, or Go based on its value.*/

#include<stdio.h>
#include<string.h>
enum traffic {RED,YELLOW,GREEN};
int main()
{
    char str[20];
    enum traffic light;
    printf("Enter traffic light: ");
    scanf("%s",str);
    if(strcmp(str,"RED")==0)
    {
        light=RED;
    }
    else if(strcmp(str,"YELLOW")==0)
    {
        light=YELLOW;
    }
    else if(strcmp(str,"GREEN")==0)
    {
        light=GREEN;
    }
    switch(light)
    {
        case RED:
        {
            printf("Stop");
            break;
        }
        case YELLOW:
        {
            printf("Wait");
            break;
        }
        case GREEN:
        {
            printf("Go");
            break;
        }
    }
    return 0;
}