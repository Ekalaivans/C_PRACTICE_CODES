#include<stdio.h>
int mul(int a,int b)
{
	return a*b;
}
int div(int a,int b)
{
	return a/b;
}
void calculation(int a, int b, int (*fptr)(int, int))
{   
printf("the values are %d\n",fptr(a,b));
}
int main()
{
calculation(25,25,mul);
calculation(24,12,div);
return 0;
}


