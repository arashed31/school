
// for loop Example 9 - hour:minute clock display

#include <stdio.h>

int main () {
  int hour, minute;
  
  printf ("for Loop Example 9 - Clock Display\n\n");

  for (hour=0; hour < 12; hour++)
    for (minute=0; minute < 60; minute++)
      // %02d code: display in 2 digits with leading 0
      printf ("%02d:%02d\n",hour,minute);

  return 0;
}

