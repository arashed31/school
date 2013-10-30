
// strncpy() Example 2

#include <stdio.h>
#include <string.h>

int main() {
  char str[60+1], dest[60+1];
  int start, length, maxlength;
  
  printf ("strncpy() Example 2\n\n");
  
  printf ("Enter your test string: ");
  scanf ("%s",str); // NOTE the lack of an & before str
  
  printf ("You entered: '%s'\n\n",str);
  
  do {
    printf ("Enter the starting position (0 to %d): ",
       strlen(str)-1); // NOTE the -1
    scanf ("%d",&start);
    if (start >= 0 && start < strlen(str)-1) break;
    printf ("The value is out of range; try again.\n");
  } while (1);
  
  do {
    maxlength=strlen(str)-start;
    printf ("Enter the length (1 to %d): ",maxlength);
    scanf ("%d",&length);
    if (length >= 1 && length <= maxlength) break;
    printf ("The value is out of range; try again.\n");
  } while (1);
  
  strncpy (dest,str+start,length);
  printf ("Result: '%s'\n\n",dest);

  return 0;
}
