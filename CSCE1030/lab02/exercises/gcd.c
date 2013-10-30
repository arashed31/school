
// Greatest Common Divisor Recursive Function Example

#include <stdio.h>

long gcd(long x, long y) {

  // base case
  if (y == 0L) return x;
  
  // recursive step
  return gcd(y,x % y);
} // gcd

int main() {
  long num1, num2;

  printf ("Example of Greatest Common Divisor "
          "Recursive Function\n\n");

  do {
    printf ("Enter two values (0 to stop): ");
    scanf ("%ld %ld",&num1,&num2);
    if (num1 == 0L || num2 == 0L) break;

    printf ("The greatest common divisor of "
              "%ld and %ld is %ld.\n\n",
                    num1,num2,gcd(num1,num2));
  } while (1);

  return 0;
}
