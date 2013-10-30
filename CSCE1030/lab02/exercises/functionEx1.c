
// Example of Function Definition and Use

#include <stdio.h>

int total;

void printValue (float value) {
  float count;

  count = value * 10.0F;

  printf ("%2.1f %2.1f %d\n",
                 count,value,total);

} // printValue

int main() {
  float num=34.1F;

  total = 23;

  printValue (num);
  printValue (16.2F);

  return 0;
} // main
