
// Simple Function Example 6

#include <stdio.h>

int larger (int a, int b) {
  if (a >= b)
    return a;
  return b;
} // larger


char upper (char ch) {
  if (ch >= 'a' && ch <= 'z')
    return ch-32;
  return ch;
} // upper


int main() {
  int x=5, y=10, z=2;
  int bigger;
  char f='f', ch1, ch2;
  
  printf ("Function Example 6\n\n");

  bigger = larger(x,y);
  printf ("bigger=%d\n",bigger);

  printf ("Larger of 20 and 15: %d\n",larger(20,15));
       
  bigger = larger(x,larger(y,z));
  printf ("Larger of x, y, z: %d",bigger);
       
  printf ("Larger of 1, 2, 6, and 4: %d\n\n",
           larger(larger(1,2),larger(6,4)));

  ch1 = upper('a');
  ch2 = upper('d');
  printf ("upper: %c %c %c\n\n",
             ch2,upper(f),upper('@'));

  return 0;
} // main
