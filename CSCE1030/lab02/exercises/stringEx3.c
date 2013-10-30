// String Example 3 - Reading Words

#include <iostream>

int main() {
  string word;
  int wordCount = 0;
  
  cout << "String Example 3" << endl << endl;
  
  while (cin >> word) {
    wordCount++;
    cout << wordCount << ": '" << word << "'" << endl;
    }

  return 0;
}
