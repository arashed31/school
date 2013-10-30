// String Function Example 4 - Reading Lines

#include <iostream>

int main() {
  string line;
  int count;

  cout << "String Example 4" << endl << endl;

  cout << "Enter a single line of text:" << endl;
  getline(cin,line);
  cout << "The line you entered was:" << endl
       << line << endl << endl;
      
  cout << "Now enter a series of lines:" << endl;
  count=1;
  while (getline(cin,line)) {
    cout << "Line " << count << ": ";
    cout << line << endl;
    count++;
    }

  return 0;
}
