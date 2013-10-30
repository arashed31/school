
// do-while Loop Example 3

#include <stdio.h>

int main () {
  int counter;
  double numEntered, sum;

  printf ("do-while Loop Example 3\n\n");

  // asking the user to enter up to 10 values
  //   or -1 to end the loop prematurely; find
  //   the values' sum and average
  
  sum = 0.0;
  counter = 1;
  do {

    printf ("Enter a value: ");
    scanf ("%lf",&numEntered);

    if (numEntered != -1.0) {
      sum = sum + numEntered;
      counter++;
      }
      
  } while (counter < 10 && numEntered != -1.0);

  printf (
    "\nThe sum is %2.2lf and the avg is %2.2lf.\n\n",
    sum,sum / counter);
  
  return 0;
}
