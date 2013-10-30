
// do-while and while Loop Example 5

// Get 3 to 6 values from the user, and remember
//   the largest of those values

#include <stdio.h>

int main () {
  int counter, numValues;
  double numEntered, largest;

  printf ("do-while & while Loop Example 5\n\n");

  // get from the user a number in the range
  //   of 3 to 6
  do {
    printf ("Enter value in range of 3 to 6: ");
    scanf ("%d",&numValues);
    
    if (numValues < 3 || numValues > 6)
      printf ("Value out of range.  Try again.\n");
  } while (numValues < 3 || numValues > 6);
  printf ("\n");
  
  
  // get that number of values from the user,
  //   remember the value of the largest of
  //   the values entered
  counter = 1;
  while (counter <= numValues) {
    printf ("Enter value %d: ",counter);
    scanf ("%lf",&numEntered);
    
    // assume the largest is the first value;
    if (counter == 1) largest = numEntered;
    // if not first value entered, compare largest
    //   to the currently-entered user value
    else if (numEntered > largest)
           largest = numEntered;
           
    counter++;
    }
    
  printf ("\nThe largest value entered was %4.4lf.\n\n",
            largest);

  return 0;
}
