#include <stdio.h> 
int main(void) 
{ 
	    int a = 0; 
	        int* iptr = &a; 
		  
		    // Dereferencing pointer outside loop 
		    //     // and saving its value in a temp variable 
		             int temp = *iptr; 
		               
		                   for (int i = 1; i < 11; ++i) { 
		                     
		                             // performing calculations on temp variable 
		                                     temp = temp + i; 
		                                         } 
		                                           
		                                               // Updating pointer using final value of temp 
		                                                   *iptr = temp; 
		                                                     
		                                                         printf("Value of a : %d", a); 
		                                                             return 0; 
		                                                             } 
		                                                             
