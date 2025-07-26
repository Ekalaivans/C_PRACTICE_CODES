#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the Numbers to perform\n");
	scanf("%d\n%d",&a,&b);
        printf("the value is %d\n",a+(~b)+1);
	return 0;
}
