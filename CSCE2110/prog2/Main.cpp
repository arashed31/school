/*
	Ahmad Rashed
	CSCE 2110.002
	Program 1 - Sets
	Main.cpp
*/

#include "Table.h"

void duhError()
{
	cout << "Error! Invalid entry." << endl;
	cin.ignore(1024,'\n');	// clear excess contents from buffer
}

// laziness
int column()
{
	string s;
	cin >> s;
	if (!s.compare("id"))
		return 1;
	if (!s.compare("course"))
		return 2;
	if (!s.compare("grade"))
		return 3;
	return 0;
}

int main()
{
	bool loop = true;
	string input = "";
	
	Table classes;
	
	while (loop) {
		cout << "tables> ";
		cin >> input;
		
		if (!input.compare("quit")) {
			loop = false;
		}
		else if (!input.compare("insert")) {
			classes.addRow();
		}
		else if (!input.compare("lookup")) {
			int w = column();
			int i; string s; char c;

			switch (w) {
				case 0:
					duhError();
					break;
				case 1:
					cin >> i;
					classes.searchID(false, i);
					break;
				case 2:
					cin >> s;
					classes.searchName(false, s);
					break;
				case 3:
					cin >> c;
					classes.searchGrade(false, c);
					break;
			}
		}
		else if (!input.compare("remove")) {
			int w = column();
			int i; string s; char c;

			switch (w) {
				case 0:
					duhError();
					break;
				case 1:
					cin >> i;
					classes.searchID(true, i);
					break;
				case 2:
					cin >> s;
					classes.searchName(true, s);
					break;
				case 3:
					cin >> c;
					classes.searchGrade(true, c);
					break;
			}
		}
		else if (!input.compare("print")) {
			classes.printTable();
		}
		else {
			duhError();
		}
	}

	return 0;
}

