#include<stdio.h>
int main()//set the 5 th bit and clear the 2 nd bit
{
	int a = 0b00001010;
	int b = 0b00010000;
	int c = a|(1<<4);
	printf("The values are %d\n",c);
	int d = a&~(1<<1);
	printf("The cleard value ois %d\n",d);
	return 0;
}
