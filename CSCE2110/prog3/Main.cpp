/*
	Ahmad Rashed
	CSCE 2110.002
	Program 3 - Graphs
	Main.cpp
*/

#include "Graph.h"

void duhError()
{
	cout << "Error! Invalid entry." << endl;
	cin.ignore(1024,'\n');	// clear excess contents from buffer
}

int main()
{
	bool loop = true;
	string input = "";
	
	Graph* theuniverseofstuff;
	
	while (loop) {
		cout << "graph> ";
		cin >> input;
		
		if (!input.compare("quit")) {
			loop = false;
		}
		else if (!input.compare("create")) {
			int n;
			cin >> n;
			theuniverseofstuff = new Graph(n);
		}
		else if (!input.compare("insert")) {
			int n;
			cin >> n;
			theuniverseofstuff->insert(n);
		}
		else if (!input.compare("remove")) {
			int n;
			cin >> n;
			theuniverseofstuff->remove(n);
		}
		else if (!input.compare("print")) {
			theuniverseofstuff->printGraph();
		}
		else {
			duhError();
		}
	}

	return 0;
}

