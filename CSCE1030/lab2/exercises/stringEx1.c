
// String Function Example 1

#include <stdio.h>
#include <string.h>

int main() {
  char Name[40+1];
  char FirstName[20+1], LastName[20+1];
  int NameLength;
  
  printf ("String Function Example 1\n\n");

  printf ("Enter your first name: ");
  scanf ("%s",FirstName);
  printf ("Enter your last name: ");
  scanf ("%s",LastName);

  // build the full name by concatenating together
  //  the first and last names with a space between them
  strcpy (Name,LastName);
  strcat (Name,", ");
  strcat (Name,FirstName);
  printf ("\nYour full name is: %s\n\n",Name);

  NameLength = strlen(Name);
  printf ("The length of your name is: %d\n\n",NameLength);

  if (strcmp(Name,"Smith, Emmitt") == 0)
    printf ("Hello, Emmitt!\n\n");
  else printf ("You must not be Emmitt Smith.\n\n");

  return 0;
}
