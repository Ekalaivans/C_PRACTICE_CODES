#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
int div(int a,int b)
{
	return a/b;
}
int main()
{
	int c=10,d=12;
	int (*fptr[])(int, int)={add,sub,mul,div};
	for(int i=0;i<4;i++)
	{
		printf("elements = %d : values=%d\n",i,fptr[i](c,d));
	}
	return 0;
}
