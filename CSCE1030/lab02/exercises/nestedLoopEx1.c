
// Nested Loop Example 1

#include <stdio.h>

int main () {
  int outer, inner;
  
  outer = 5;
  while (outer <= 10) {
    inner = 3;
    while (inner >= 1) {
      printf ("%d %d %d\n",inner,outer,
          inner + outer);
      inner--;
      }
    outer++;
    }

  return 0;
}
