
// for Loop Example 4

#include <stdio.h>

int main () {
  int counter, largest, num;
  
  printf ("for Loop Example 4\n\n");

  for (counter=1; counter <= 8; counter++) {
    printf ("Enter a number: ");
    scanf ("%d",&num);

    if (counter == 1) {
      printf ("First value; largest by default.\n");
      largest = num;
      }
    else if (num == largest)
      printf ("Your number is the same as the largest.\n");
    else if (num > largest) {
      printf ("Your number is the new largest!\n");
      largest = num;
      }
    else
      printf ("Your number is smaller than the largest.\n");
    }

  printf ("\nThe largest number you entered was %d.\n",
            largest);
  
  return 0;
}
