
// Simple Function Example 5

#include <stdio.h>

void exampleHeader(int exampleNumber) {
  printf ("Sample Function Example %d\n\n",
             exampleNumber);
} // exampleHeader


void displaySumSmallest (int numValues) {
  int count; // local variables
  double sum, value, average, smallest;

  printf ("Please enter %d values:\n",numValues);

  sum = 0.0;
  for (count=1; count <= numValues; count++) {
    scanf ("%lf",&value);
    
    sum = sum + value;
    
    // if this is the first value entered, assume
    //   it is the smallest
    if (count == 1)
      smallest = value;
    else // otherwise compare it against what we
         //   think is the smallest
      if (value < smallest)
        smallest = value;
    }
    
  average = sum / numValues;
  printf ("The sum is: %2.2lf\n"
          "The average is: %2.2lf\n"
          "The smallest is: %2.2lf\n\n",
             sum,average,smallest);

} // displaySumSmallest


int main() {
  
  exampleHeader(5);
  
  displaySumSmallest(5);
  displaySumSmallest(3);
  displaySumSmallest(8);
  
  return 0;
} // main

