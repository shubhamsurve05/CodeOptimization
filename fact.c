#include <stdio.h>
int
main (void)
{
  int fact[5];
  fact[0] = 1;

  // Overhead of managing a counter 
  //     // just for 4 iterations 
  //         // is not a good idea 
  for (int i = 1; i < 5; ++i)
    {
      fact[i] = fact[i - 1] * i;
    }
  return 0;
}
