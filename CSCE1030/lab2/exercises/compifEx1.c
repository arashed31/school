// Compound if Example 1

#include <stdio.h>

int main() {
  int num;

  printf ("Compound if Example 1\n\n");
  
  printf ("Enter a number: ");
  scanf ("%d",&num);

  if (num >=0 && num <= 100)
    printf ("Number is in the range 0-100.\n");
  else
    printf ("Number is NOT in the range of 0-100.\n");
  if (num == 5 || num == 120)
    printf ("Number is either 5 or 120.\n");
  else
    printf ("Number is NOT 5 or 120.\n");

  return 0;
}
