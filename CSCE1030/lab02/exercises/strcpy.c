
// strcpy() Example

#include <stdio.h>
#include <string.h>

int main() {
  char str[30+1] = "This is a test.";
  //                012345678901234
  //                          11111
  char dest[30+1];
  
  printf ("Example of strcpy() function\n\n");
  
  strcpy (dest,str);
  printf ("The destination string: %s\n\n",dest);
  
  strcpy (str,"A new value for str.");
  printf ("The str is now: %s\n\n",str);

  strcpy (dest,str);
  printf ("The destination string: %s\n\n",dest);
  
  return 0;
}
