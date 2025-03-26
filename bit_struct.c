#include<stdio.h>
struct car
{
	char name[20];
	int mfg_no;
	float rate;
}car_d;
int main()
{
	printf("The size of structure is %ld\n",sizeof(struct car));
	return 0;
}
