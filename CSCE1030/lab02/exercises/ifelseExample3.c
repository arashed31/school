// if-else Conditional Example 3

#include <stdio.h>

int main() {
  int counter;

  printf ("if-else Conditional Example 3\n\n");

  printf ("Enter a value: ");
  scanf ("%d",&counter);

  // Example that includes multiple statements (block)
  if (counter < 0) {
     printf ("The number is negative, "
                   "so turn it to positive.\n");
     counter = -counter;
    }
  else {
     printf ("The number is positive, so double it.\n");
     counter = counter + counter;
    }


  printf ("\nEnter a number: ";
  scanf ("%d",&counter);
  if (counter < 10)
    if (counter < 5)
      printf ("The number is less than 5.\n");
    else ; // do nothing -- "null else"
  else if (counter > 20)
    printf ("The number is greater than 20.\n");
  else
    printf ("The number is between 10 and 20.\n");


  // Same code using a block instead
  printf ("\nEnter a number: ");
  scanf ("%d",&counter);
  if (counter < 10) {
    if (counter < 5)
      printf ("The number is less than 5.\n");
    }
  else if (counter > 20)
    printf ("The number is greater than 20.\n");
  else
    printf ("The number is between 10 and 20.\n");

  return 0;
}
