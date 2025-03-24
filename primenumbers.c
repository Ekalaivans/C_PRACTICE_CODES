#include <stdio.h>
int prime_num(int a);  
int main()
{  
 int a, result;  
  printf("Enter the Number to check: ");  
 scanf("%d", &a);  
result = prime_num(a);  

if (result == 1)  
printf("%d is a prime number.\n", a);  
else
	printf("%d is not a prime number.\n", a);  

return 0;  
}  

int prime_num(int a)
{  
 if (a <= 1) 
 return 0;  
for (int i = 2; i * i <= a; i++) {  
if (a % i == 0)
return 0;  
}				   		   
return 1;  
}  

