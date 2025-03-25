#include<stdio.h>
int main()
{
	int a,count=0;
	register int i;
	scanf("%d",&a);
	for(i=0;i<=a;i++)
	{
		if(i%2==0)
		{
			printf(" The total count %d and the value is %d\n",count,i);
			count++;

		}
	//	return 0;
	}
	return 0;
}

