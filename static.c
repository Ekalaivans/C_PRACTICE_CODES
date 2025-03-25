#include<stdio.h>
void counter()
{
	int static count =10;
	count++;
	printf("%d\n", count);
}
int main()
{
	counter();
	counter();
	return 0;
}
