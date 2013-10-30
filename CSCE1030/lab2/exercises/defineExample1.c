// Demonstration of simple Symbolic Constants

#include <stdio.h>

#define PROMPT "Please enter a number: "
#define PI 3.14159265439
#define DISPLAY printf

int main() {
  double radius;
  
  printf ("Example of simple Symbolic Constants\n\n");
  
  DISPLAY(PROMPT);
  scanf ("%lf",&radius);
  
  DISPLAY ("The area of the circle is %2.3lf\n",
      PI * radius * radius);
      
  DISPLAY ("The circumference of the circle is %2.3lf\n\n",
      2.0 * PI * radius);
      
  return 0;
}
