#include <stdio.h>
int main()
{
	int a[5] = {1, 2, 3, 4, 5};

	for (int i = 0; i < 5; i++)
       	{  
	   printf("The value of array element a[%d] = %d \n", i, a[i]);  
	   printf("The address of a[%d] = %d\n", i, (void*)&a[i]);
					    }
		    return 0;
}

