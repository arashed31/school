// Function Example 12 - More Reference Parameters

#include <iostream>

float calc(int numValues, float &largest, float &smallest) {
  float value, sum=0.0F;
  int i;

  cout << "Enter " << numValues << " values:" << endl;
  for (i=1; i <= numValues; i++) {
    cout << "Enter value " << i << ": ";
    cin >> value;
    sum += value;
    if (i == 1) // first value
      largest = smallest = value;
    else {
      if (value < smallest) smallest = value;
      if (value > largest) largest = value;
      }
    }
  return sum;
} // calc


int main () {
  float largest, smallest, sum;
  
  cout << "Function Example 12" << endl << endl;

  sum = calc(6,largest,smallest);
  cout << endl << "The sum is: " << sum << endl
       << "The largest is: " << largest << endl
       << "The smallest is: " << smallest
       << endl << endl << endl;

  sum = calc(8,largest,smallest);
  cout << endl << "The sum is: " << sum << endl
       << "The largest is: " << largest << endl
       << "The smallest is: " << smallest
       << endl;
          
  return 0;
} // main

