
// Examples of Array References with Pointers

#include <stdio.h>

int main() {
  // Test arrays...
  int A[5] = { 10, 20, 30, 40, 50 };
  double B[4] = { 1.1, 2.2, 3.3, 4.4 };
  char Name[] = "This is a test.";
  
  // Test pointers...
  int *Aptr;
  double *Bptr;
  char *NamePtr;
  
  int i; // loop counter
  
  printf ("Examples of Array References with Pointers\n\n");
  
  for (i=0; i < 5; i++)
    printf ("%d ",A[i]);
  printf ("\n\n");
  
  Aptr = A;
  for (i=0; i < 5; i++)
    printf ("%d ",*Aptr++);
  printf ("\n\n");
  
  Bptr = B;
  for (i=0; i < 4; i++)
    printf ("%2.1lf ",*Bptr++);
  printf ("\n\n");

  NamePtr = Name;
  for (i=0; i < strlen(Name); i++)
    printf ("%c",*NamePtr++);
  printf ("\n\n");
  
  // Point to the last chr in Name
  NamePtr = Name + strlen(Name) - 1;
  for (i=0; i < strlen(Name); i++)
    printf ("%c",*NamePtr--);
  printf ("\n\n");
  
  // Now we use the knowledge that the last character
  //   in the string is the null character ('\0'), so
  //   we can setup a while loop that continues until
  //   the null is found, eliminating the need for the
  //   loop counter variable.
  NamePtr = Name;
  while (*NamePtr != '\0')
    printf ("%c",*NamePtr++);
  printf ("\n\n");

  return 0;
}
