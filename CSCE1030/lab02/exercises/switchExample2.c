// Switch Command Example 2

#include <stdio.h>
#include <ctype.h>

int main() {
  char ch;
  printf ("Enter a letter: ");
  scanf ("%c",&ch);

  if (isalpha(ch)) {
    switch (toupper(ch)) {
      case 'A' : case 'E' : case 'I' :
      case 'O' : case 'U' :
        printf ("You entered a vowel!\n");
      default :
        printf ("You entered a consonant.\n");
      }
    }
  else printf ("You didn't enter a letter.\n");
  return 0;
}
