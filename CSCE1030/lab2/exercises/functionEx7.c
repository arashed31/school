
// Function Example 7

#include <stdio.h>

void displayTitle() {
  printf ("C Function Example 7\n\n");
} // displayTitle


float min (float n1, float n2) {
  if (n1 <= n2) return n1;
  return n2;
} // min


float max (float n1, float n2) {
  if (n1 >= n2) return n1;
  return n2;
} // max


float min3 (float n1, float n2, float n3) {
  return min(min(n1,n2),n3);
} // min3


int main() {
  float a,b,c;
  
  displayTitle();
  
  printf ("Enter three numbers (one space between each): ");
  scanf ("%f %f %f",&a,&b,&c);

  printf ("The larger of a and b is %2.2f\n",
            max(a,b));
       
  printf ("The smaller of a and b is %2.2f\n",
            min(a,b));
       
  printf ("The smaller of a, b and c is %2.2f\n\n",
            min3(a,b,c));
       
  return 0;
} // main

