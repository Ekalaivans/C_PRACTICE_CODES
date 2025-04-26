#include "maths.h"


 static int multiply_internal(int a, int b)
   {
     return a * b;
     }

     // External (public) functions
  int add(int a, int b)
      {
         return a + b;
         }

   int sub(int a, int b)
      {
             // Using static function inside here
                 int temp = multiply_internal(a, 1);
                     return temp - b;
      }
