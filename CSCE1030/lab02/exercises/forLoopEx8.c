
// for loop Example 8 - Simple Cosine Graph (Rewrite)

#include <stdio.h>
#include <math.h>  // for cos()

int main () {
  double range, value;
  int count, offset, sp;
  
  printf ("for Loop Example 8 - Cosine Graph Rewrite\n\n");

  range = 0.0;
  for (count = 1; count <= 40; count++) {

    value = cos(range);  // calculate value

    // convert decimal value into integer to use
    //   as number of blanks to display
    offset = (value + 1.0) * 15.0;
    
    // display the indicated number of blanks
    for (sp=0; sp < offset; sp++)
      printf (" ");
      
    // display the marker for the graph
    printf ("*\n");

    range += 0.5;
    }

  return 0;
}

