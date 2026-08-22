//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main()
{
    char op;
    float a,b;
    int x,y;

    printf("Enter a,b and operator: ");
    scanf("%f%f %c",&a,&b,&op);
    
    switch(op)
    {
        case '+':
        printf("%.0f",a+b);
        break;
        case '-':
        printf("%.0f",a-b);
        break;
        case '*':
        printf("%.0f",a*b);
        break;
        case '/':
        printf("%.0f",a/b);
        break;
        case '%':
        x=(int)a;
        y=(int)b;
        printf("%d",x%y);
        break;
    } 

    return 0;
}