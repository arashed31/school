
// Function Example 8

#include <stdio.h>

char lower (char ch) {
  if (ch >= 'A' && ch <= 'Z') return ch+32;
  return ch;
} // lower


int getIntRange (int minValue, int maxValue) {
  int numEntered;
  
  do {
    printf ("Enter an integer in the range %d to %d: ",
        minValue,maxValue);

    scanf ("%d",&numEntered);
    
    if (numEntered >= minValue &&
           numEntered <= maxValue) break;

    printf ("Number out of range.  Try again.\n");

  } while (1);
  
  return numEntered;
} // getIntRange


char getYesNo (void) {
  char response, enter;
  
  do {
    printf ("Enter Y)es or N)o: ");
    scanf ("%c%c",&response,&enter);
    response = lower(response);
  } while (response != 'y' && response != 'n');
  
  return response;
} // getYesNo


int main() {
  char answer;
  int num;
  
  printf ("Function Example 8\n\n");

  num = getIntRange (10,20);
  printf ("User entered %d.\n\n",num);

  printf ("This time, user entered %d.\n\n",
             getIntRange(100,250));

  answer = getYesNo();
  printf ("User answered %c.\n\n",answer);

  return 0;
} // main

