
// Nested Loop Example 2

#include <stdio.h>

int main () {
  int hour, minute;
  
  hour = 0;
  while (hour < 12) {
    minute = 0;
    while (minute < 60) {
      printf ("%02d:%02d\n",hour,minute);
      minute++;
      }
    hour++;
    }

  return 0;
}
