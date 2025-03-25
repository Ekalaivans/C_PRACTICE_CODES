#include <stdio.h>
#include <string.h>  

struct player {
	    char name[20];
	        int runs;
		    float sr;
};

int main() {
	    struct player player; 
		     strcpy(player.name, "Thala Dhoni");
		     player.runs = 5600;
		     player.sr = 145.34;
		     printf("player : %s runs : %d sr :  %f\n", player.name, player.runs, player.sr);
		     return 0;
 }
		
