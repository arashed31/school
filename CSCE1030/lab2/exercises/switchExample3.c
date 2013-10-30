// Switch Command Example 3

#include <stdio.h>

int main() {
  char grade;

  printf ("Enter your grade: ";
  scanf ("%c",&grade);
  
  switch (grade)   {
    case 'A':
      printf ("Your average must be between 90 - 100.\n");
      break;
    case 'B':
      printf ("Your average must be between 80 - 89.\n");
      break;
    case 'C':
      printf ("Your average must be between 70 - 79.\n");
      break;
    case 'D':
      printf ("Your average must be between 60 - 69\n");
      break;
    default:
      printf ("Sorry, but your average must be below 60.\n");
    }

  return 0;
}
