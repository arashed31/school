// Switch Command Example 1

#include <stdio.h>

int main() {
  int x;
  printf ("Enter a value: ");
  scanf ("%d",&x);

  switch (x) {
    case  0 :
    case  1 :
    case  2 : printf ("Zero, One, or Two\n"); break;
    case  3 : printf ("Three\n"); break;
    case  4 :
    case  5 : printf ("Four or Five\n"); break;
    case  6 :
    case  7 :
    case  8 :
    case  9 : printf ("Five thru Nine\n"); break;
    default : printf ("Any number other than 0-9.\n");
    }
  return 0;
}
