
// Example showing various Pointer Expressions

#include <stdio.h>

int main() {
  int a[] = { 10, 20, 30, 40, 50, 60 };
  int *p = a;  // &a[0]
  
  printf ("Examples of Pointer Expressions\n\n");

  printf ("*p = %d\n",*p); // 10

  printf ("*p++ = %d\n",*p++); // 10
  printf ("*p = %d\n",*p); // 20

  printf ("*(++p) = %d\n",*(++p)); // 30

  printf ("++*p = %d\n",++*p); // 31
  printf ("*p = %d\n",*p); // 31

  printf ("++(*p) = %d\n",++(*p)); // 32

  return 0;
}

