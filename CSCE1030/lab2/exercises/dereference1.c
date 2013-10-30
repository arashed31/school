
// Pointer Dereference Example 1

#include <stdio.h>

int main() {
  // Declare regular variables to be used
  int count=10, num=20;
  double total=50.56;
  
  // Declare pointer variables
  int *ptr1;
  double *ptr2;
  
  printf ("Pointer Dereference Example 1\n\n");
  
  // Make ptr1 point to count
  ptr1 = &count;
  printf ("ptr1 = %d  count = %d\n\n",
             *ptr1, count);

  // Make ptr1 point to a different variable
  ptr1 = &num;
  printf ("ptr1 = %d  num = %d\n\n",
             *ptr1, num);
             
  // Make ptr2 point to total
  ptr2 = &total;
  printf ("ptr2 = %2.2lf total = %2.2lf\n\n",
            *ptr2, total);
  
  return 0;
}
