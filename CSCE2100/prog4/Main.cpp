/*
 Ahmad Rashed
 Program 4
 Main.cpp
*/

#include "BSTree.h"
#include <cstdlib>

BSTree tree;		// our binary search tree object

bool isNum(string str)
{
	for(unsigned int i = 0; i < str.length(); i++) {
		if(isalpha(str[i])) {
			cout << "Error! That's not a number." << endl;
			return false;
		}
	}
	return true;
}
int InToNum()
{
	string number;
	cin >> number;
	if (isNum(number)) {
		return atoi(number.c_str());
	}
	return 0;	// 0 represents false for the below if statments
}

int main(int argc, const char * argv[])
{
	bool loop = true;
	string input;
	int num;
	
	while (loop) {
		cout << "bst> ";
		cin >> input;
		
		if (!input.compare("quit")) {
			loop = false;
		}
		else if (!input.compare("add")) {
			num = InToNum();
			if (num) {
				tree.insertVal(1, num);
			}
		}
		else if (!input.compare("delete")) {
			num = InToNum();
			if (num && tree.search(num)) {
				tree.deleteVal(num);
			}
			else
				cout << "Error! Not Found." << endl;
		}
		else if (!input.compare("search")) {
			num = InToNum();
			if(num) {
				if (tree.search(num))
					cout << "true" << endl;
				else
					cout << "false" << endl;
			}
		}
		else if (!input.compare("list")) {
			tree.printTree();
		}
		else if (!input.compare("clear")) {
			tree.clearTree();
		}
		else {
			cout << "Error! Improper input." << endl;
		}
		
	}
}

