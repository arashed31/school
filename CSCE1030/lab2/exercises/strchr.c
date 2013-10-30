
// strchr() Example

#include <stdio.h>
#include <string.h>

int main() {
  char str[] = "abcdefghijklmnopqrstuvwxyz";
  char look;
  char *pos;

  // Look for the character 'e' in str
  pos = strchr(str,'e');

  // Display search result
  printf("Character 'e' found at position %d.\n\n",
           pos - str);

  // Now look for a user-specified character in the string,
  //   worrying about whether it is in the string or not
  printf ("Specify character to look for: ");
  scanf ("%c",&look);
  
  pos = strchr(str,look);
  if (pos == NULL)
    printf ("Character '%c' could not be found.\n\n",look);
  else
    printf ("Character '%c' was found at position %d.\n\n",
              look, pos - str);
        
  return 0;
}
