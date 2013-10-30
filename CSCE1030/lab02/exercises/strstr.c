
// strstr() Example

#include <stdio.h>
#include <string.h>

int main() {
  char str[] = "This is a sample string.";
  char look[30+1];
  char *pos;

  // Look for the character 'e' in str
  pos = strstr(str,"sample");

  // Display search result
  printf("'sample' found at position %d.\n\n",
           pos - str);

  // Now look for a user-specified character in the string,
  //   worrying about whether it is in the string or not
  printf ("Specify string to look for (no spaces): ");
  scanf ("%s",look);

  pos = strstr(str,look);
  if (pos == NULL)
    printf ("'%s' could not be found.\n\n",look);
  else
    printf ("'%s' was found at position %d.\n\n",
              look, pos - str);

  return 0;
}
