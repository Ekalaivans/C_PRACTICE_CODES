#include <stdio.h>
void swap(int *a, int *b)
{
*a = *a + *b;
*b = *a - *b;
*a = *a - *b;
printf("Swapped values inside function: %d and %d\n", *a, *b);
}

int main()
{
 int a = 12, b = 21;
 swap(&a, &b);
 printf("Swapped values in main: %d and %d\n", a, b);
 return 0;
}

