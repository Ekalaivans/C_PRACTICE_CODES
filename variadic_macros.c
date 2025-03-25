#include <stdio.h>
#define LOG(format, ...) printf(format, __VA_ARGS__)

int main()
{
	    LOG("Name: %s, Age: %d\n", "Alice", 30);
	        return 0;
}

