// printf() and scanf() Example 2

#include <stdio.h>

int main() {
  double pi = 3.14159265439;
  double radius, area, circumference;
  
  printf ("Calculate Info About a Circle\n"
          "=============================\n\n"
          "Enter the circle's radius: ");
          
  scanf("%lf",&radius);
  
  area = pi * radius * radius;
  circumference = 2.0 * pi * radius;
  
  printf ("\nThe circle's radius is: %6.4lf\n"
          "The circle's circumference is %6.4lf\n"
          "The circle's area is %6.4lf\n\n",
          radius, area, circumference);

  printf ("Another way to represent the calculations:\n"
          "%6.4lf %6.4lf %6.4lf\n\n",
          radius, pi * radius * radius, 2.0 * pi * radius);

  return 0;
}
