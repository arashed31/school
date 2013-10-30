// Function Example 10 - Reference Parameters

#include <iostream>

void swap (int &a, int &b) {
  int temp;

  temp = b;
  b = a;
  a = temp;
} // swap


void swapWrong (int a, int b) {
  int temp;

  temp = b;
  b = a;
  a = temp;
} // swapWrong


int main() {
  int x = 5, y = 10;

  swap (x,y);
  cout << x << " " << y << endl;

  swapWrong (x,y);
  cout << x << " " << y << endl;
  
  return 0;
} // main
