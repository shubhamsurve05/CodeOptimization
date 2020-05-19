#include <stdio.h>
int
main (void)
{
  int a = 0;
  int *iptr = &a;

  // Dereferencing pointer inside loop 
  //     // is costly 
  for (int i = 1; i < 11; ++i)
    {
      *iptr = *iptr + i;
    }
  printf ("Value of a : %d", a);
  return 0;
}
