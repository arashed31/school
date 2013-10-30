// if-else Conditional Example 1

#include <stdio.h>

int main() {
  int counter;

  printf ("if-else Conditional Example 1\n\n");
  
  printf ("Enter a number: ");
  scanf ("%d",&counter);

  if (counter > 100)
    printf ("The number is > 100.\n");
  else
    printf ("The number is <= 100.\n");


  printf ("\nEnter another number: ");
  scanf ("%d",&counter);
  
  if (counter > 100)
    printf ("The number is > 100.\n");
  else if (counter <= 0)
    printf ("The number is <= 0.\n");
  else
    printf ("The number is between 0 and 100.\n");

  return 0;
}
