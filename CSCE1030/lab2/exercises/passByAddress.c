
/* Example of Passing Function Argument's Address

   Output produced:

      num=25

      arg=25
      arg changed=50

      num=50   !!BINGO!!
*/

#include <stdio.h>

void test(int *arg) {
  printf ("arg=%d\n",*arg);

  // change the function argument value
  *arg = 50;
  printf ("arg changed=%d\n\n",*arg);
} // test


int main() {
  int num = 25;

  printf ("Example of Passing a "
              "Function Argument's Address\n\n");

  printf ("num=%d\n\n",num);

  test(&num);

  printf ("num=%d   !!BINGO!!\n\n",num);

  return 0;
} // main
