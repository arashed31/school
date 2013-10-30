
// Array Example 2 - Manipulation of array data

#include <stdio.h>

int main(void) {
  double Num[10], largest, smallest, sum, average;
  int i;
  
  printf ("Array Example 2 - "
              "Manipulation of array data\n\n");

  printf ("Enter a series of 10 numbers:\n");
  for (i=0; i < 10; i++)
    scanf ("%lf",&Num[i]);

  // Now determine the various values...
  
  sum = 0.0; // initialize the sum of the values
  
  // Assume the largest and smallest is the value
  //    of the first element in the array
  largest = smallest = Num[0];
  for (i=0; i < 10; i++) {
    sum += Num[i];
    if (Num[i] > largest) largest = Num[i];
    else if (Num[i] < smallest) smallest = Num[i];
    }

  // Display the various values
  printf ("The sum is %2.2f\n"
          "The average is %2.2f\n"
          "The largest value is %2.2f\n"
          "The smallest value is %2.2lf\n\n",
             sum, sum / 10.0, largest, smallest);


  // Finally, display only the positive values that
  //   the user entered
  for (i=0; i < 10; i++)
    if (Num[i] > 0.0F) printf ("%2.2lf ",Num[i]);
  printf ("\n\n");

  return 0;
}
