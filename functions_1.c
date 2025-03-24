#include <stdio.h>

void swap();

int main()
{  
	    swap();  
	    return 0;  
}

void swap()
{  
    int a, b;  
    printf("Enter two numbers: ");  
    scanf("%d %d", &a, &b);  
    printf("Before swapping: a = %d, b = %d\n", a, b);  
    a = a + b;  
    b = a - b;  
    a = a - b;  
    printf("After swapping: a = %d, b = %d\n", a, b);  
}

