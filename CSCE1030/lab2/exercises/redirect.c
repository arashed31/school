// Example that is used to demonstrate
//   Input Redirection

#include <stdio.h>

int main() {
  int i, numValues;
  float sum=0.0F, value;
  
  while (1) {
    printf ("\nEnter a value in the range of 3 to 6: ");
    scanf ("%d",&numValues);
    if (numValues >= 3 && numValues <= 6) break;
    printf ("Out of range; please try again.\n");
    }

  for (i=1; i <= numValues; ++i) {
    printf ("Enter value %d: ",i);
    scanf ("%f",&value);
    sum += value;
    }
    
  printf ("The sum of the %d values was %2.2f\n\n",
              numValues, sum);
  
  return 0;
}
