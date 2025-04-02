

nclude <stdio.h>
#include <pthread.h>
#include <unistd.h>

void *threadFunction(void *arg) {
	    printf("Hello from the thread!\n");
	        return NULL;
}

int main() {
	    pthread_t thread;
 if (pthread_create(&thread, NULL, threadFunction, NULL) != 0) 
 {
	 perror("Failed to create thread");
		                     return 1;
	                        }
		
		//                             // Wait for the thread to finish
		                                 pthread_join(thread, NULL);
		
		                                     printf("Thread execution completed.\n");
		                                         return 0; // Fixed the syntax error
		                                         }
		























