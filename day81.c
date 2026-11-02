//Q131: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.

#include <stdio.h>
enum week{Sun,Mon,Tue,Wed,Thu,Fri,Sat};
int main()
{
    printf("SUNDAY = %d\nMONDAY = %d\nTUESDAY = %d\nWEDNESDAY = %d\nTHURSDAY = %d\nFRIDAY = %d\nSATURDAY = %d\n",Sun,Mon,Tue,Wed,Thu,Fri,Sat);
    return 0;
}