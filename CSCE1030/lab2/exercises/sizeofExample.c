// Example calls to the sizeof() function

#include <stdio.h>

int main() {
  printf ("Example calls to the sizeof() function\n\n");
  
  printf ("Integer: %d\n",sizeof(int));
  printf ("Float: %d\n",sizeof(float));
  
  printf ("Double: %d\nCharacter: %d\n",
     sizeof(double),sizeof(char));
     
  printf ("Short Integer: %d\n",sizeof(short));
  printf ("Long Integer: %d\n",sizeof(long));
  printf ("Long Double: %d\n",sizeof(long double));
  
  return 0;
}
