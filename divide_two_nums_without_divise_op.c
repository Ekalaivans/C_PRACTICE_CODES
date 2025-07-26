#include <stdio.h>
#include <stdlib.h>

int divide(int a, int b);

int main()
{
    int a = 20, b = 4;  
    int result = divide(a, b); 
    printf("The result is = %d\n", result);
    return 0;
}

int divide(int a, int b)
{
    int count = 0;
    int sign = ((a < 0) ^ (b < 0)) ? -1 : 1;
    a = abs(a);
    b = abs(b);
    
    while (a >= b)
    {
        a = a - b;
        count++;
    }

    return sign * count;
}

