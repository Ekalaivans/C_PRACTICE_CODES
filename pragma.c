#include<stdio.h>
#pragma pack(1)
struct car 
{
	int model_no;
	 char name;
	float price;
	//char name;
	double speed;
}car_details;
int main()
{
	printf("The size of the structure is %ld\n",sizeof(struct car));
	return 0;
}
