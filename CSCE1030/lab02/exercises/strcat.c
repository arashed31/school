
// strcat() Example

#include <stdio.h>
#include <string.h>

int main() {
  char s1[] = "Test";
  char s2[] = "string";
  char result[40+1];
  
  strcpy (result,s1);
  strcat (result," ");
  strcat (result,s2);
  printf ("result: '%s'\n",result);
  
  strcat (result," and more!");
  printf ("result: '%s'\n\n",result);

  return 0;
}

