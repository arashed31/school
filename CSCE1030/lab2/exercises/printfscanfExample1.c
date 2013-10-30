// printf() and scanf() Example 1

#include <stdio.h>

int main() {
  int intnum;
  float floatnum;
  double doublenum;

  // Use a "prompt" to identify for the user what
  //   the program wants him/her to enter
  printf ("Enter an integer: ");
  scanf ("%d",&intnum);

  printf ("The value was %d.\n\n",intnum);

  printf ("Enter a float: ");
  scanf ("%f",&floatnum);

  printf ("Result: %10.4f\n\n",floatnum);

  printf ("Enter a double: ");
  scanf ("%lf",&doublenum);
  
  printf ("Result: %10.4lf\n\n",doublenum);

  printf ("Display all three values:\n"
          "%10d %10.2f %10.2lf\n",
          intnum, floatnum, doublenum);

  return 0;
}
