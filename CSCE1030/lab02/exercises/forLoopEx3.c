
// for Loop Example 3

#include <stdio.h>

int main () {
  int counter, startvalue, endvalue;
  
  printf ("for Loop Example 3\n\n");

  printf ("Enter Starting value: ");
  scanf ("%d",&startvalue);

  printf ("Enter Ending value: ");
  scanf ("%d",&endvalue);

  for (counter=startvalue; counter <= endvalue; counter++)
    printf ("%d\n",counter);
  
  return 0;
}
