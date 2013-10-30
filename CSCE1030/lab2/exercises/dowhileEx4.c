
// do-while Loop Example 4

#include <stdio.h>

int main () {
  char resp, enter;
  int legal;

  printf ("do-while Loop Example 4\n\n");

  // Get A, B, or C from the user
  do {
    printf ("Please enter either A, B or C: ");
    scanf ("%c%c",&resp,&enter);
    if (resp != 'A' && resp != 'B' && resp != 'C')
      printf ("Invalid response, try again.\n");
  } while (resp != 'A' && resp != 'B' && resp != 'C');
  
  printf ("Your valid entry was %c.\n\n",resp);

     
  /////////////////////////////////////////////////////
     
     
  // Get A, B, or C from the user using a
  //   different programming technique
  legal = 0; // assume response will be illegal
  do {
    printf ("Please enter either A, B or C: ");
    scanf ("%c%c",&resp,&enter);
    if (resp != 'A' && resp != 'B' && resp != 'C')
      printf ("Invalid response, try again.\n");
    else legal = 1;
  } while (legal == 0);
  
  printf ("Your valid entry was %c.\n\n",resp);

  return 0;
}
