
// for loop Example 5 - Nested loops

#include <stdio.h>

int main () {
  int outer, inner;
  
  printf ("for Loop Example 5 - Nested Loops\n\n";
  
  for (outer=5; outer <= 10; outer++) {
    for (inner=3; inner >= 1; inner--) {
      printf ("%2d %2d %2d\n",inner,outer,inner + outer);
      }
    }

  return 0;
}
