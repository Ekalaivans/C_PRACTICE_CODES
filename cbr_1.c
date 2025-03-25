#include<stdio.h>
static int a=10;
void increament()
{
	a=a+1;
}

int main()
{

	increament(a);
	printf("a=%d\n",a);
	return 0;
}
