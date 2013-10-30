
// Array Example - Display Sine and Cosine curve
//    using Two-Dimensional Array

#include <stdio.h>
#include <math.h>

int main () {
  double range, value;
  int count, offset, sp, row, col;
  char screen[15][31]; // define screen matrix

  printf ("Array example - "
               "Sine/Cosine curve using Matrix\n\n");

  // load screen matrix with blanks
  for (row=0; row < 15; row++)
    for (col=0; col < 31; col++)
      screen[row][col] = ' ';

  range = 0.0;
  for (count = 0; count < 31; count++) {

    value = cos(range);  // calculate value

    // convert decimal value into integer to use
    //   as offset in the matrix
    offset = (value + 1.0) * 7.0;

    // set the specified location in matrix to a star
    screen[offset][count] = '*';

    // now do the same calculation for the sine function
    value = sin(range);
    offset = (value + 1.0) * 7.0;
    screen[offset][count] = '#';

    range += 0.5;
    }

  // now display the screen matrix
  for (row=0; row < 15; row++) {
    for (col=0; col < 31; col++)
      printf ("%c ",screen[row][col]);
    printf ("\n");
    }

  printf ("\n");
  return 0;
}


