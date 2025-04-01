#include<stdio.h>
int main()
{
	int size =3;
	static const char *msg[]={"Hello", "bhai", "came"};
	for(int i=0;i<3;i++)
	{
		printf("%s\n",msg[i]);
	}
	return 0;
}
