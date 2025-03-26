#include<stdio.h>
#pragma pack(1)
struct date
{
	int d;
	double m;
	char c;
};
int main()
{
struct date today;
printf("The size of the structure is %ld\n",sizeof(struct date));
return 0;
}
