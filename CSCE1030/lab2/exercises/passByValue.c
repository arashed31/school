// Example of "Pass by Value" in Functions

#include <stdio.h>

void test(int arg) {
  printf ("arg=%d\n",arg);
  arg = 50;  // change the function argument value
  printf ("arg changed=%d\n\n",arg);
} // test

  
int main() {
  int num = 25;
  
  printf ("Example of \"Pass by Value\" in Functions\n\n");
  
  printf ("num=%d\n\n",num);
  
  test(num);
  printf ("num=%d\n\n",num);

  return 0;
} // main
