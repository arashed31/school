
// Simple Function Example 4

#include <stdio.h>

void displaySumSmallest
        (double n1, double n2, double n3, double n4) {

  double sum, smallest; // local variables
  
  printf ("Values: %2.2lf %2.2lf %2.2lf %2.2lf\n",
              n1,n2,n3,n4);

  sum = n1 + n2 + n3 + n4;
  printf ("The sum is: %2.2f\n",sum);

  // find the smallest, assuming the first is
  //   initially the smallest
  smallest = n1;
  if (n2 < smallest) smallest = n2;
  if (n3 < smallest) smallest = n3;
  if (n4 < smallest) smallest = n4;
  
  printf ("The smallest was %2.2lf\n\n",smallest);

} // displaySumSmallest


int main() {
  double t1 = 16.3, t2 = 98.23, t3 = 32.1,
         n1 = -3.2, n2 = 5.55;
  
  printf ("Simple Function Example 4\n\n");
  displaySumSmallest(t1,t2,t3,n1);
  displaySumSmallest(1.2,4.5,-2.2,-10.1);
  displaySumSmallest(n1,n1,n1,n2);
  displaySumSmallest(n1+n2,3.2,t3-t2,0.123);
  displaySumSmallest(4,3,2,1);
  return 0;
} // main
