
// Array Example 1 - Index Referencing

#include <stdio.h>

int main() {
  int A[10],
      C[5] = { 5, 4, 3, 2, 1 },
      i, j; // used for loop counters
  double D[3][2] = { 0.0 };
  
  printf ("Array Example 1 - Index Referencing\n\n");

  printf ("%d\n",C[0]); // 5

  A[3] = C[1];
  printf ("%d\n",A[3]); // 4

  A[6] = C[2] + C[3] + 3;
  printf ("%d\n\n",A[6]); // 8

  printf ("%d %d %d %d %d\n\n",
                C[0],C[1],C[2],C[3],C[4]);

  D[2][1] = 127.3;
  D[0][0] = 45.75;
  D[0][1] = -65.8;

  // Loop examples that display entire arrays

  for (i=0; i < 5; i++)
    printf ("%d ",C[i]);
  printf ("\n\n");

  // Display matrix array elements all on one line
  for (i=0; i < 3; i++)
    for (j=0; j < 2; j++)
      printf ("%2.2lf ",D[i][j]);
  printf ("\n\n");

  // Display matrix array elements like a matrix
  for (i=0; i < 3; i++) {
    for (j=0; j < 2; j++)
      printf ("%2.2lf ",D[i][j]);
    printf ("\n");
    }
  printf ("\n\n");

  return 0;
} // main

