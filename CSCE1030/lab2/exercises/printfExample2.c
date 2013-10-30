// printf() function Examples

#include <stdio.h>

int main() {
  int intnum;
  float floatnum;
  double doublenum;

  printf ("This program demonstrates displaying\n"
          "output with variable references\n\n");

  intnum = 209;
  printf ("Result: %d\n",intnum);

  floatnum = 20.12F;
  printf ("Result: %3.2f\n",floatnum);

  doublenum = 123.456;
  printf ("Result: %4.3lf\n",doublenum);

  printf ("Two values at once: %d %6.1f\n",
      intnum,floatnum);

  return 0;
}
