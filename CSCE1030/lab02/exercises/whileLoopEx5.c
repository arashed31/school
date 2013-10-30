// while Loop Example 5

// Prompt the user to specify how many double values
//   they would like to enter, then get that number
//   of valuesand add them together to form their sum.

#include <stdio.h>

int main() {
  int numValuesEnteredSoFar=0;
  int numValuesToEnter;
  double numEntered, sum;
  
  printf ("while Loop Example 5\n\n");
  
  printf ("How many numbers would you like to enter? ");
  scanf ("%d",&numValuesToEnter);
  
  sum = 0.0; // initialize accumulated sum

  // start the loop...
  while (numValuesEnteredSoFar < numValuesToEnter) {
  
    // keep track of values entered
    numValuesEnteredSoFar++;

    // prompt user for each value and include which
    //   number it is in the prompt
    printf ("Enter value %d: ",numValuesEnteredSoFar);
    scanf ("%lf",&numEntered);

    sum = sum + numEntered;
    }
    
  printf ("The sum of the values is %4.4lf.\n",sum);

  return 0;
}

