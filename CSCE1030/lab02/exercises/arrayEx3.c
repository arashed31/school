
// Array Examples 3

#include <stdio.h>

int main () {

  float F[5];
  float F1[10] =
     { 1.2F, 1.1F, -10.9F, 7.34F }; // rest will be 0
  int TableA[3][4] =
     { {6,15,-2,0}, {12,90,5,43}, {-50,20,1,10} };
  int i,j,sum;
  
  printf ("Array Example 3\n\n");
  
  for (i=0; i < 5; i++)
    scanf ("%f",&F[i]);
  printf ("\n");

  for (i=0; i < 5; i++)
    printf ("%2.2f\n",F[i]);

  sum = 0;
  for (i=0; i < 3; i++)
    for (j=0; j < 4; j++)
      sum += TableA[i][j];
  printf ("Sum of TableA is %d.\n\n",sum);
  
  for (i=0; i < 3; i++)
    for (j=0; j < 4; j++)
      if (TableA[i][j] > 0)
        printf ("Position %d,%d is positive: %d\n",
                   i,j,TableA[i][j]);

  return 0;
}
