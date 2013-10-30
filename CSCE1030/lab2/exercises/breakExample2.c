
// break Command Example 2
//    Getting a range of values from user

#include <stdio.h>

int main () {
  int num;

  printf ("do-while Loop Example 2\n\n");

  // asking the user to enter a value within a
  //   specified range of values (1 to 10)
  do {
    printf ("Enter a number from 1 to 10: ");
    scanf ("%d",&num);
    if (num >= 1 && num <= 10) break;
    printf ("Number is not in proper range!\n");
  } while (1);

  printf ("\nYou entered %d.\n\n");

  return 0;
}

