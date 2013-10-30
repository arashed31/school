/*
	Ahmad Rashed
	Program 3
	Main.cpp
*/

#include "BSTree.h"

int isNum(string str)
{
	for(unsigned int i = 0; i < str.length(); i++)
	{
		if(isalpha(str[i]))
		{
			cout << "Error! That's not a number." << endl;
			return 0;
		}
	}
	return 1;
}

int main()
{
	BSTree tree;
	bool loop = true;
	string input, number;

	while (loop)
	{
		cout << "bst> ";
		cin >> input;
		
		if(!input.compare("quit"))
		{
			loop = false;
		}
		else if (!input.compare("add"))
		{
			cin >> number; 
			if(isNum(number))
				tree.insert(atoi(number.c_str()));
		}
		else if (!input.compare("delete"))
		{
			cin >> number; 
			if(isNum(number))
			{
				if(tree.deleteNode(atoi(number.c_str())) == NULL)
					cout << "Error! Element not found." << endl;
			}
		}
		else if (!input.compare("inorder"))
		{
			if (tree.getRoot() == NULL)
				cout << "Error! Tree is empty.";
			else
				tree.toString(tree.getRoot());
			cout << endl;
		}
		else if (!input.compare("search"))
		{
			cin >> number; 
			if(isNum(number))
			{
				if(tree.searchNode(atoi(number.c_str())))
					cout << "true" << endl;
				else
					cout << "false" << endl;
			}
		}
		else if (!input.compare("height"))
		{
			cout << (tree.findHeight(tree.getRoot()) - 1) << endl;
		}
		else
			cout << "Error! Improper input." << endl;
	}
	
	return 0;
}

