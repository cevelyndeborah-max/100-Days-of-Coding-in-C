//Q135: Assign explicit values starting from 10 and print them.

#include <stdio.h>
enum e {A=10,B,C};
int main()
{
	printf("A=%d\n",A);
	printf("B=%d\n",B);
    printf("C=%d",C);
	return 0;
}