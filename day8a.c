//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter Character: ");
    scanf("%c",&ch);
    if(ch>=48&&ch<=57)
    {
        printf("Digit");
    }
    else if(ch>=65&&ch<=90)
    {
        printf("Uppercase alphabet");
    }
    else if(ch>=97&&ch<=122)
    {
        printf("lowercase alphabet");
    }
    else
    {
        printf("Special Character");
    }
    return 0;
}