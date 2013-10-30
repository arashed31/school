
// Example of Dynamic Array Allocation and Use

#include <stdio.h>
#include <stdlib.h>  // !!! Remember to include this library

int main() {
  int *values;
  int numValues;
  int i; // counter

  printf ("Example of Dynamic Array Allocation and Use\n\n");
  
  printf ("Indicate the number of values to be entered:\n");
  do {
    printf ("Enter a value in the range of 5 to 15: ");
    scanf ("%d",&numValues);
    if (numValues >= 5 && numValues <= 15) break;
    printf ("Number entered out of range; try again.\n\n");
  } while (1);
  printf ("\n");
  
  // Dynamically allocate the array based on the size
  //   indicated by the user
  values = (int *) malloc (sizeof(int) * numValues);
  
  // Now get that number of values from the user, using the
  //   standard square-bracket array notation
  for (i=0; i < numValues; i++) {
    printf ("Enter value #%d: ",i+1);
    scanf ("%d",&values[i]); // same as:   values+i
    }

  // Now print the values back using the pointer notation
  printf ("\nThe values entered were: ");
  for (i=0; i < numValues; i++)
    printf ("%d ",*(values+i)); // same as:   values[i]
  printf ("\n\n");
  
  return 0;
}
