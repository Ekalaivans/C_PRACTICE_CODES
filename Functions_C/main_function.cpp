#include "global.h"
#include "declare.h"

int main()
{
	int x, y, z, v;
	 x = add();
         y = sub();
	 z = mul();
	 v = divide();

	 printf("Addition: %d\n", x);
	 printf("Subtraction: %d\n", y);
	 printf("Multiplication: %d\n", z);
	 printf("Division: %d\n", v);

	return 0;
}
