/* C Program Example - Course: CSE 1030 - C Programming
   programmer: Don Retzlaff  donr@unt.edu

   C program to accept two numbers from user and
   add the numbers together.
*/

#include <stdio.h> // include system information

int main() {
  int num1, num2, sum;

  // display initial program identification
  printf ("Simple C Program - Don Retzlaff donr@unt.edu\n\n");

  // prompt the user for input
  printf ("Please enter first number: ");
  scanf ("%d",&num1);
  printf ("Please enter second number: ");
  scanf ("%d",&num2);

  sum = num1 + num2;
  printf ("The sum is %d\n",sum);

  return 0; // return control to Operating System
}

