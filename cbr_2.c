#include<stdio.h>
void increament(int *p)
{
	*p=*p+1;
}
int main()
{
	int a=20;
	increament(&a);
	printf("A = %d\n",a);
	return 0;
}
