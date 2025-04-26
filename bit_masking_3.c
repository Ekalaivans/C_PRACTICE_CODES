#include<stdio.h>
int main()
{
	int a = 0b0001;
	int b = a | (1<<2);
	int c = a | (1>>3);
	int d = a | (1<<4);
	int e = a & ~(1<<3);
	printf(" %d \n%d\n%d\n%d\n%d\n",a,b,c,d,e);
	return 0;

}
