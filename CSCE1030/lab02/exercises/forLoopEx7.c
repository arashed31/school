
// for loop Example 7 - Simple Cosine Graph

#include <stdio.h>
#include <math.h>

int main () {
  double range, value;
  int offset, sp;
  
  printf ("for Loop Example 7 - Simple Cosine Graph\n\n");

  for (range=0.0; range <= 20.0; range += 0.5) {

    value = cos(range);  // calculate value

    // convert decimal value into integer to use
    //   as number of blanks to display
    offset = (value + 1.0) * 15.0;
    
    // display the indicated number of blanks
    for (sp=0; sp < offset; sp++)
      printf (" ");
      
    // display the marker for the graph
    printf ("*\n");
    }

  return 0;
}

