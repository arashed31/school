
// Factorial recursive function Example

#include <stdio.h>

long factorial (long number) {

  // base case
  if (number <= 1L) return 1L;
  
  // recursive step
  return number * factorial(number - 1L);
} // factorial


int main() {
  long count;
  
  for (count=-1L; count <= 10L; count++)
    printf ("%2ld! = %ld\n",count,factorial(count));
    
  return 0;
}  // main

