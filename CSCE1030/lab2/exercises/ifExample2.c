
// if Conditional Example 2
//   Determine if the value entered is negative,
//      positive, or zero

#include <stdio.h>

int main() {
  double counter;

  printf ("if Conditional Example 2\n\n");

  printf ("Enter a number: ");
  scanf ("%lf",&counter);

  if (counter < 0.0)
    printf ("The value entered is negative.\n");
    
  if (counter == 0.0)
    printf ("The value entered is 0.\n");
    
  if (counter > 0.0)
    printf ("The value entered is positive.\n");

  return 0;
}
