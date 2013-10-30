
// strlen() Example

#include <stdio.h>
#include <string.h>

int main() {
  char str[] = "This is a test";
  //            01234567890123
  //                      1111
  int len;

  len = strlen(str);
  printf ("Length is %d\n",len); // 14
  printf ("%d\n",strlen(str));   // 14

  return 0;
}
