// Switch Command Example 5
//   (A not-so good example of a switch)

#include <stdio.h>
#include <ctype.h>

int main () {
  char ch;

  printf ("Enter a character: ");
  scanf ("%c",&ch);
  
  switch (ch) {
    case '+' : printf ("You typed a plus sign.\n");  break;
    case '-' : printf ("You typed a minus sign.\n"); break;
    case '0' : case '1' : case '2': case '3' : case '4' :
    case '5' : case '6' : case '7' : case '8' : case '9' :
      printf ("You typed a digit.\n");
      break;
    case 'A' : case 'B' : case 'C' : case 'D' : case 'E' :
    case 'F' : case 'G' : case 'H' : case 'I' : case 'J' :
    case 'K' : case 'L' : case 'M' : case 'N' : case 'O' :
    case 'P' : case 'Q' : case 'R' : case 'S' : case 'T' :
    case 'U' : case 'V' : case 'W' : case 'X' : case 'Y' :
    case 'Z' :
      printf ("You typed an uppercase letter.\n");
      printf ("The letter was %c.\n",ch);
      break;
    default : printf ("You typed something else.\n"); break;
  }
  
  // OR, by not using a switch:
  if (ch == '+')
    printf ("You typed a plus sign.\n");
  else if (ch == '-')
    printf ("You typed a minus sign.\n");
  else if (ch >= '0' && ch <= '9') // else if (isdigit(ch))
    printf ("You typed a digit.\n");
  else if (ch >= 'A' && ch <= 'Z') { // else if (isupper(ch))
    printf ("You typed an uppercase letter.\n");
    printf ("The letter was %c.\n",ch);
    }
  else printf ("You typed something else.\n");
  
  return 0;
}
