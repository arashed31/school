// Example of the use of Symbolic Constants
//   (Macro Version)

#include <stdio.h>

#define SWAP(a,b,t) { t=a; a=b; b=t; }
#define DIFF(a,b) ((a)-(b))

int main() {
  int val1, val2, temp, x, y=12;
  double old=2.3, new=8.91, tempd;

  printf ("Example of the use of Symbolic Constants\n"
          "  (Macro Version)\n\n");
          
  printf ("Enter value 1: ");
  scanf ("%d",&val1);
  printf ("Enter value 2: ");
  scanf ("%d",&val2);
  
  if (val1 < val2)
    SWAP (val1,val2,temp);
  printf ("val1=%d val2=%d\n\n",val1,val2);
  
  x = 4 * DIFF(5,27-y); // x = 4 * ((5)-(27-y));
  printf ("x=%d\n\n",x);
  
  // use SWAP on two doubles instead of integers
  SWAP(old,new,tempd);
  printf ("old=%2.2lf new=%2.2lf\n\n",old,new);
  return 0;
}
