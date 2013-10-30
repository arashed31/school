
// String single character [] Example

#include <stdio.h>
#include <string.h>

int main() {
  char str[30+1] = "This is a string.";
  char first, last;
  int pos;
  
  printf ("Character position 3: %c\n",str[3]);
  
  printf ("Character position 8: %c\n",str[8]);
  
  first = str[0];
  last = str[strlen(str)-1];
  printf ("The first and last chrs: %c %c\n",
            first,last);
            
  // Display string backwards
  for (pos=strlen(str)-1; pos >= 0; pos--)
    printf ("%c",str[pos]);
    
  printf ("\n\n");

  return 0;
}
