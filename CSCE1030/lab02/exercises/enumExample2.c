// Example of printing an enumerated variable

#include <stdio.h>

int main() {
  enum DAYS { SUN=1,MON,TUE,WED,THU,FRI,SAT } Today;
  
  printf ("Example of printing an enumerated variable\n\n");
  Today = WED;
  
  printf ("Today is: ");
  switch (Today) {
    case SUN : printf ("Sunday"); break;
    case MON : printf ("Monday"); break;
    case TUE : printf ("Tuesday"); break;
    case WED : printf ("Wednesday"); break;
    case THU : printf ("Thursday"); break;
    case FRI : printf ("Friday"); break;
    case SAT : printf ("Saturday"); break;
    }
    
  printf (".\n\n");
  return 0;
}
