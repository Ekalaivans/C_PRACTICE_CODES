#include<stdio.h>
int add(int a,int b);
int main()
{
	int (*fptr)(int,int);
         fptr=&add;
	 printf("%d\n",fptr(2,3));
	 return 0;
}
int add(int a,int b)
{
return a+b;
}
