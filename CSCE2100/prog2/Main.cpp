/*
 Program 2
 Main.cpp
 Yeah it's kind of messy. Sorry about that.
*/

#include "List.h"

int stringCheck(string str)
{
	for(int i = 0; i < str.length(); i++)
	{
		if(!isalpha(str[i]))
		{
			cout << "Error! That's not a string." << endl;
			return 0;
		}
	}
	return 1;
}

int main()
{
	List words;
	bool loop = true;
	string buffer, word;

	while (loop)
	{
		cout << "list> ";
		cin >> buffer;
		
		if(buffer.compare("quit") == 0)
			loop = false;

		else if(buffer.compare("insert") == 0) {
			cin >> word;
			if(stringCheck(word))
				words.addNode(word);
		}

		else if(buffer.compare("delete") == 0) {
			cin >> word;
			if(stringCheck(word))
				words.delNode(word);
			else
				cout << "Error! Strings only." << endl;
		}

		else if(buffer.compare("clear") == 0) 
			words.clearNode();

		else if(buffer.compare("search") == 0) {
			cin >> word;
			if(stringCheck(word))
			{
				Node *temp;
				temp = words.searchNode(word);
				if(temp == NULL)
					cout << "false" << endl;
				else
					cout << "true" << endl;
			}
			else
				cout << "Error! Strings only." << endl;
		}

		else if(buffer.compare("print") == 0) 
			words.toString();

		else if(buffer.compare("getsize") == 0)
			cout << words.getNodeCount() << endl;

		else 
			cout << "Error! Unrecognized command." << endl;
	}
	
	return 0;
}

