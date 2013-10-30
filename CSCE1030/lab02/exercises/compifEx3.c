// Compound if Example 3

#include <stdio.h>
#include <ctype.h>

int main() {
  char ch;

  printf ("Compound if Example 3\n\n");
  
  printf ("Enter a character: ");
  scanf ("%c",&ch);

  // Check to see if character is a ch
  if (!isalpha(ch))
    printf ("You did not enter a letter.\n\n");
  else {
    ch = toupper(ch);
    if (ch == 'A' || ch == 'E' || ch == 'I' ||
        ch == 'O' || ch == 'U')
      printf ("The letter is a vowel.\n\n");
    else
      printf ("The letter is a consonant.\n\n");
    }

  return 0;
}
