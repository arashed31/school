
// break Command Example 3
//   Getting specific values from user

#include <stdio.h>

int main () {
  char resp, enter;

  printf ("break Command Example 3\n\n");

  // Get A, B, or C from the user
  do {
    printf ("Please enter either A, B or C: ");
    scanf ("%c%c",&resp,&enter);
    if (resp == 'A' || resp == 'B' || resp == 'C') break;
    printf ("Invalid response, try again.\n");
  } while (1);

  printf ("Your valid entry was %c.\n\n",resp);

  return 0;
}

