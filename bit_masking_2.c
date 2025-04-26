#include<stdio.h>
int main()
{
	int a =0b1010;
	int b= a | (1<<3);
	printf(" %d   %d\n ",a,b);
	return 0;
}

