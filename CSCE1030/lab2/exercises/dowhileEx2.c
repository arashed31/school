
// do-while Loop Example 2

#include <stdio.h>

int main () {
  int num;

  printf ("do-while Loop Example 2\n\n");

  // asking the user to enter a value within a
  //   specified range of values (1 to 10)
  do {
    printf ("Enter a number from 1 to 10: ");
    scanf ("%d",&num);
    if (num < 1 || num > 10)
      printf ("Number is not in proper range!\n");
  } while (num < 1 || num > 10);

  printf ("\nYou entered %d.\n\n",num);

  return 0;
}
