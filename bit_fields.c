#include<stdio.h>
struct bitfield
{
	unsigned int a;
	unsigned int b;
	unsigned int c;
};
int main()
{
   printf("The size of the struct is %ld\n",sizeof(struct bitfield));
	typedef struct bitfield size;
	size new={10,12,13};
	printf("%d %d %d\n",new.a,new.b,new.c);
	return 0;
}

