// continue Command Example (without the break)

#include <stdio.h>

int main() {
  int counter;

  printf ("Enter a series of values (ending with -1)\n\n");

  do {

    printf ("Enter a value: ");
    scanf ("%d",&counter);

    if (counter != -1) {

      // if value is divisible by 2, continue
      if (counter % 2 == 0) continue;

      // if value is divisible by 3, continue
      if (counter % 3 == 0) continue;

      printf ("The value %d is not divisible by 2 or 3.\n\n",
          counter);
          
      }

  } while (counter != -1);

  return 0;
}
