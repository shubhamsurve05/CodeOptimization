#include <stdio.h> 
  
int main(void) 
{ 
	    int arr[1000]; 
	        int a = 1, b = 5, c = 25, d = 7; 
		  
		    // pre calculating the constant expression 
		         int temp = (((c % d) * a / b) % d); 
		           
		               for (int i = 0; i < 1000; ++i) { 
		                       arr[i] = temp * i; 
		                           } 
		                               return 0; 
		                               } 
		                               
