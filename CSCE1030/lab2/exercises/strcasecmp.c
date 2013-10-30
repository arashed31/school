
// strcasecmp() Examples

#include <stdio.h>
#include <string.h>

int main() {
  char str1[] = "cat",
       str2[] = "DOG",
       str3[] = "cow",
       str4[] = "Antelope";
  char name1[30+1], name2[30+1];

  printf ("strcasecmp() Examples\n\n");

  if (strcasecmp(str1,str2) < 0)
    printf ("%s appears before %s.\n\n",str1,str2);

  if (strcasecmp(str2,str3) > 0)
    printf ("%s appears after %s.\n\n",str2,str3);

  if (strcasecmp(str1,str4) > 0)
    printf ("%s appears after %s.\n\n",str1,str4);

  if (strcasecmp(str3,"cow") == 0)
    printf ("These two strings are the same.\n\n");

  printf ("Enter first name (no spaces): ");
  scanf ("%s",name1);

  printf ("Enter second name (no spaces): ");
  scanf ("%s",name2);

  if (strcasecmp(name1,name2) < 0)
    printf ("'%s' appears before '%s'.\n\n",
              name1,name2);
  else if (strcasecmp(name1,name2) == 0)
    printf ("These strings are the same.\n\n");
  else // > 0
    printf ("'%s' appears after '%s'.\n\n",
              name1,name2);

  return 0;
}
