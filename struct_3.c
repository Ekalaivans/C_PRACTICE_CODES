#include<stdio.h>
struct player {
	int a;
	char b[20];
	float c;
};
union players 
{
	int e;
	char f[20];
	float g;
};
int main()
{
union players u;
printf("The size of union is %ld\n",sizeof(union players));

struct player p;
printf("The size of the struct is %ld \n",sizeof(struct player));
return 0;
}

