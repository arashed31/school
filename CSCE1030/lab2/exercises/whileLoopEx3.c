// while Loop Example 3

#include <stdio.h>

int main() {
  double value;
  
  printf ("while Loop Example 3\n\n");
  
  value = 200.00;
  while (value < 210.0) {
    printf ("%6.2f\n",value);
    value = value + 1.5;
    }
    
  return 0;
}

