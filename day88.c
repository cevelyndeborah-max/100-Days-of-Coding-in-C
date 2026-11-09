//Q138: Print all enum names and integer values using a loop.

#include <stdio.h>
enum colour{RED,YELLOW,GREEN};
int main()
{
    enum colour c;
    char cn[3][10]={"RED","YELLOW","GREEN"};
    for(int i=RED;i<=GREEN;i++)
    {
        printf("%s=%d\n",cn[i],i);
    }
    return 0;
}