
// strncpy() Example 1

#include <stdio.h>
#include <string.h>

int main() {
  char str[30+1] = "This is a test.";
  //                012345678901234
  //                          11111
  char dest[30+1];
  
  printf ("strncpy() Example 1\n\n");
  
  strncpy (dest,str,4);
  printf ("dest is: '%s'\n",dest); // This
  
  strncpy (dest,str+5,2);
  printf ("dest is: '%s'\n",dest); // is
  
  strncpy (dest,str+8,6);
  printf ("dest is: '%s'\n",dest); // a test
  
  strncpy (dest,str+strlen(str)-5,5);
  printf ("dest is: '%s'\n",dest); // test.
  
  // Note if you want the trailing characters in
  // a string, the strcpy() function could also
  // be used, and the third parameter omitted
  strcpy (dest,str+strlen(str)-5);
  printf ("dest is: '%s'\n\n",dest); // test.
  
  return 0;
}
