// Function Example 11 - More Reference Parameters

#include <iostream>

void swap(double &n1, double &n2) {
  double temp;

  temp = n1;
  n1 = n2;
  n2 = temp;
} // swap


double order(double &n1, double &n2, double &n3) {
  double sum;

  if (n2 < n1) swap(n1,n2);
  if (n3 < n2) swap(n2,n3);
  if (n2 < n1) swap(n1,n2);

  return n1 + n2 + n3;
} // order


int main() {
  double sum;
  double n1, n2, n3;

  cout << "Enter three values:" << endl;
  cin >> n1 >> n2 >> n3;

  sum = order(n1,n2,n3);

  cout << "Values ordered: " << n1 << " "
       << n2 << " " << n3 << endl
       << "Sum: " << sum << endl;
  
  return 0;
} // main
