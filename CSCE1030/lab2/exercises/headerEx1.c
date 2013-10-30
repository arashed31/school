// Simple Example of Including a
//    User-Defined Header File

#include <stdio.h>
#include "header1.h"

int main() {
  int i, array[ARRAY_SIZE];
  
  printf ("Enter array values:\n");
  for (i=0; i < ARRAY_SIZE; ++i) {
    printf ("Enter value %d: ",i+1);
    scanf ("%d",&array[i]);
    }
    
  printf ("Here again are the values you entered:\n");
  for (i=0; i < ARRAY_SIZE; ++i)
    printf ("%d ",array[i]);
    
  printf ("\n\n");
  return 0;
}
