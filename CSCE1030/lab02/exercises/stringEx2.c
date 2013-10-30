// String Function Example 2

#include <iostream>

int main() {
  string str("This is a test string.");
  //          0123456789012345678901
  //                    1         2

  string word1, word2, result;
  int pos;
  
  cout << "String Function Example 2" << endl << endl;

  word1 = str.substr(0,4);
  cout << word1 << endl;  // This

  word2 = str.substr(15,6);  // string
  cout << word2 << endl;

  result = word1 + " " + word2;
  cout << result << endl;  // This string

  pos = str.find("is",0);
  cout << pos << endl;  // 2

  pos = str.find("junk",0);
  if( pos != string::npos )
    cout << "Found junk at " << pos
         << "???" << endl;
  else
    cout << "Didn't find junk" << endl;

  str.insert(10,"stuff ");
  cout << str << endl;
    // This is a stuff test string.

  cout << str.replace(2,2,"at") << endl;
    // This at a stuff test string.

  cout << "The fifth character is "
       << str[5] << endl; // i

  return 0;
}
