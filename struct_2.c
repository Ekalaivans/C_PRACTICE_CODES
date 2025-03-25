#include <stdio.h>
#include <string.h>  // Required for strcpy()

struct player
{
	    char name[20];
	        int wickets;
		    float economy;
}; // Added semicolon

int main()
{
	    struct player p_1;
	        struct player *ptr; 
		ptr = &p_1;
	       	strcpy(ptr->name, "Starc"); 
	            ptr->wickets = 230;  
			        ptr->economy = 4.56;  

		 printf("%s %d %.2f\n", ptr->name, ptr->wickets, ptr->economy);
				    
				             return 0;
				             }

