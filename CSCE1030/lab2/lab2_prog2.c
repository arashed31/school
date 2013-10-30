/*
	Ahmad Rashed
	arashed31@gmail.com
	CSCE 1030.307
	Lab 2: Program 2
	Return the product of two numbers entered by the user.
*/

#include <stdio.h> // include system information

int main() {
  int num1, num2, result;

  printf ("Simple C Program - Ahmad Rashed arashed31@gmail.com\n\n");

  printf ("Please enter first number: ");
  scanf ("%d",&num1);
  printf ("Please enter second number: ");
  scanf ("%d",&num2);

  result = num1 * num2;
  printf ("The product is %d\n", result);

  return 0;
}