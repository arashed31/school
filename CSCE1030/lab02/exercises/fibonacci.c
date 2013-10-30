
// Fibonacci series Recursive Function Example

#include <stdio.h>

long fibonacci (long n) {
  // base case
  if (n == 0 || n == 1) return n;
  
  // recursive step
  return fibonacci(n-1) + fibonacci(n-2);
} // fibonacci


int main() {
  long result, number;
  
  printf ("Example of Recusive Fibonacci Function\n\n");
  
  do {
    printf ("Enter an integer (-1 to stop): ");
    scanf ("%ld",&number);
    if (number == -1L) break;
    
    result = fibonacci(number);
    printf ("Fibonacci(%ld) = %ld\n",number,result);
  } while (1);
  
  return 0;
}

