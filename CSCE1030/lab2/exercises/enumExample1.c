// Example of the use of "enum" variables

#include <stdio.h>

int main(void) {
  enum BOOLEAN { FALSE, TRUE };
  enum DAYS { SUN=1,MON,TUE,WED,THU,FRI,SAT } Today;
  enum BOOLEAN Flag;
  
  printf ("Example using 'enum' datatypes and variables\n\n");
  Today = WED;
  printf ("Today is %d\n\n",Today);
  
  Flag = TRUE;
  printf ("The flag is equal to %d\n\n",Flag);
  
  if (Today == FRI)
    printf ("Today is friday!\n\n");
  else
    printf ("Today is not friday :(\n\n");
    
  return 0;
}
