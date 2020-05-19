#include <stdio.h> 
int main(void) 
{ 
	    register int i = 0; 
	        register int j = 0; 
		    int n = 5; 
		      
		        // using register variables 
			//     // as counters make the loop faster 
			         for (i = 0; i < n; ++i) { 
			                 for (j = 0; j <= i; ++j) { 
			                             printf("* "); 
			                                     } 
			                                             printf("\n"); 
			                                                 } 
			                                                     return 0; 
			                                                     } 
			                                                     
