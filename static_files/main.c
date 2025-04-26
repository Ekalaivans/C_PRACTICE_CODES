#include <stdio.h>
#include "maths.h"

int main()
{
  int x = 10, y = 5;

  printf("Add: %d\n", add(x, y));
  printf("Sub: %d\n", sub(x, y));

  printf("%d\n", multiply_internal(x,y)); // ❌ Error: Cannot use static function from another file
  return 0;
}
