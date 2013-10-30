// Compound if Example 2

#include <stdio.h>

int main() {
  char letter;

  printf ("Compound if Example 2\n\n");
  
  printf ("Enter a letter: ";
  scanf ("%c",&letter);

  if (letter == 'A' || letter == 'E' || letter == 'I' ||
      letter == 'O' || letter == 'U')
    printf ("The letter is a vowel.\n");
  else
    printf ("The letter is a consonant.\n");

  return 0;
}
