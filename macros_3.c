#include<stdio.h>
#define MIN(a,b) ((a)<(b))?(a) : (b)
int main()
{
	int a=10,b=20;
	printf("Minimum is = %d\n",MIN(a,b));
	return 0;
}
