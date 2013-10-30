// Switch Command Example 4

#include <stdio.h>

int main() {
  char ch;

  printf ("Enter a character: ");
  scanf ("%c",&ch);
  
  if (ch == '+')
    printf ("You typed a plus sign.\n");
  else if (ch == '-')
    printf ("You typed a minus sign.\n");
  else if (ch == ' ')
    printf ("You typed a space.\n");
  else if (ch == '!')
    printf ("You typed a bang.\n");
  else
    printf ("You typed something else.\n");

  // OR, by using a SWITCH: */
  switch (ch) {
    case '+' : printf ("You typed a plus sign.\n"); break;
    case '-' : printf ("You typed a minus sign.\n"); break;
    case ' ' : printf ("You typed a space.\n"); break;
    case '!' : printf ("You typed a bang.\n"); break;
    default  : printf ("You typed something else.\n");
    break;
    }

  return 0;
}
