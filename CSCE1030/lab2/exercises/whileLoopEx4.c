// while Loop Example 4

#include <stdio.h>

int main() {
  int numEntered, // used to store each value
                  //   entered by the user
      numValues;  // counter to count the current
                  //   number of values entered
                  //   by the user
  
  printf ("while Loop Example 4\n\n");
  
  printf ("Please enter 5 values:\n\n");
  
  // initiate counter to keep track of how many times
  //   we've executed the loop
  numValues = 0;

  // start the loop...
  while (numValues < 5) {
  
    numValues++; // keep track of the values entered

    // prompt user for each value and include which
    //   number it is in the prompt
    printf ("Enter value %d: ",numValues);
    scanf ("%d",&numEntered);

    printf ("Last value was: %d\n",numEntered);
    }
    
  return 0;
}

