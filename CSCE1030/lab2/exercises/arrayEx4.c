
// Array Example 4 - Passing Arrays to Functions

#include <stdio.h>

void printFloatArray (float arrayIn[], int numRows) {
  int i;

  for (i=0; i < numRows; i++)
    printf ("%2.2f ",arrayIn[i]);
  printf ("\n\n");
} // printFloatArray


void printMatrixVersion1
       (int arrayIn[][4], int numRows) {
  int i,j;

  for (i=0; i < numRows; i++) {
    for (j=0; j < 4; j++)
      printf ("%d ",arrayIn[i][j]);
    printf ("\n");
    }
  printf ("\n\n");
} // printMatrixVersion1


void printMatrixVersion2
       (int arrayIn[][4], int numRows) {
  int i,j;

  for (i=0; i < numRows; i++, printf ("\n"))
    for (j=0; j < 4; j++)
      printf ("%d ",arrayIn[i][j]);
  printf ("\n\n");
} // printMatrixVersion2


int main () {
  float F1[10] = {1.2F,1.1F,-10.9F,7.34F};
  float F2[4] = {5.4F,2.21F,-12.2F,0.01F};
  int TableA[3][4] =
        { {6,15,-2,0}, {12,90,5,43}, {-50,20,1,10} };
        
  printf ("Array Example 4 - "
              "Passing Arrays to Functions\n\n");

  printFloatArray (F1,10);
  printFloatArray (F2,4);
  printFloatArray (F1,6);

  printMatrixVersion1 (TableA,3);
  
  printMatrixVersion2 (TableA,3);
  printMatrixVersion2 (TableA,2);
  
  return 0;
} // main

