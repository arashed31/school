
// Simple Function Example 3

#include <stdio.h>

void displaySum(double n1, double n2) {

  printf ("%2.2lf\n",n1 + n2);

} // displaySum


int main() {
  double t1 = 16.3, t2 = 98.23, t3 = 32.1,
         n1 = -3.2, n2 = 5.55;
  
  printf ("Simple Function Example 3\n\n");

  displaySum(12.003,54.7);
  displaySum(59.23,t1);
  displaySum(t2,106.33);
  displaySum(t1,t2);
  displaySum(t1,t1);
  displaySum(n2,n1);
  displaySum(t1+t2,t3-t2+2.2);
  
  return 0;
} // main
