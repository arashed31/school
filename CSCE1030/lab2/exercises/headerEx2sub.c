// Subroutine for Header File Example 2

#include <stdio.h>
#include "header2.h"

void readData(void) {
  int i;
  for (i=0; i < ARRAY_SIZE; ++i) {
    printf ("Enter value %d: ",i+1);
    scanf("%d",&array[i]);
    }
  printf ("\n");
} // readData


void writeData(int numPerLine) {
  int i;
  for (i=0; i < ARRAY_SIZE; ++i)
    if ((i+1 % numPerLine) == 0)
      printf ("\n");
    printf ("%d ",array[i]);
    }
  printf ("\n\n");
} // writeData
