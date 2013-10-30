
// for loop Example 6 - Addition Table

#include <stdio.h>

int main () {
  int rows, cols, sum;
  
  printf ("for Loop Example 6 - Addition Table\n\n");
  
  for (rows=0; rows < 10; rows++) {
    for (cols=0; cols < 10; cols++) {
      sum = rows + cols;
      printf ("%2d ",sum);
      }
    printf ("\n");
    }

  return 0;
}
