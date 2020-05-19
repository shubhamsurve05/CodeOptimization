#include <stdio.h> 
int main(void) 
{ 
	    int arr[1000]; 
	        int a = 1, b = 5, c = 25, d = 7; 
		  
		    // Calculating a constant expression 
		    //     // for each iteration is not good. 
		             for (int i = 0; i < 1000; ++i) { 
		                     arr[i] = (((c % d) * a / b) % d) * i; 
		                         } 
		                             return 0; 
		                             } 
		                             
