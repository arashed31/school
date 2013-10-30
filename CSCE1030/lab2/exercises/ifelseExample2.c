// if-else Conditional Example 2
// This example includes compound-if comparisons

#include <stdio.h>

int main() {
  int counter;

  printf ("if-else Conditional Example 2\n\n");

  printf ("Enter a number: ");
  scanf ("%d",&counter);
  if (counter > 0 && counter < 100)
    printf ("The number is between 1 and 100.\n");
  else
    printf ("The number is not between 1 and 100.\n");

  printf ("Enter a number: ");
  scanf ("%d",&counter);
  if (counter < 1 || counter > 100)
    printf ("The number is not between 1 and 100.\n");
  else
    printf ("The number is between 1 and 100.\n");

  return 0;
}
