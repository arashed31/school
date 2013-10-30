
// Example showing various uses of the
//   Asterisk (*) operator

#include <stdio.h>

int main() {
  int num1=10, num2=55, product;
  
  // declare the pointer variables
  int *ptr1, *ptr2, *ptr3;
  
  printf ("Example showing Asterisk (*) Operator\n\n");
  
  // Assigning the variable addresses to pointers
  ptr1 = &num1;
  ptr2 = &num2;
  ptr3 = &product;
  
  // Perform calculation using pointers
  product = *ptr1 * *ptr2;
  printf ("The product is %d\n\n", *ptr3);
  
  // Go ahead and use all the pointers
  *ptr3 = *ptr1 * *ptr2;
  printf ("The product is %d\n\n", product);
  
  return 0;
}
