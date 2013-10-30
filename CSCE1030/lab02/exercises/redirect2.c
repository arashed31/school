// Another example tailor-designed to use
//   Input Redirection

#include <stdio.h>

int main() {
  int i;
  float numbers[10], sum=0.0F;
  
  printf ("Demonstrate Input Redirection\n\n");
  
  // Get the values from the redirected input
  //   (note that no user interaction is included)
  for (i=0; i < 10; i++)
    scanf("%f",&numbers[i]);
    
  // Now add the entered values together
  for (i=0; i < 10; i++)
    sum += numbers[i];
    
  // Finally, print their sum and average
  printf ("The sum is %2.2f and the average is %2.2f\n\n",
            sum, sum / 10.0F);
  return 0;
}
