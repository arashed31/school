/*
	Ahmad Rashed
	CSCE 2110.002
	Program 4 - Floyd's Graphing Algorithm
	Main.cpp

	All code in this program is either written by me or found online.
	Any code inspired by the interwebs has explicit written permission for free use.
*/

#include "Matrix.h"

void duhError()
{
	cout << "Error! Invalid entry." << endl;
	cin.ignore(1024,'\n');	// clear excess contents from buffer
}

int main()
{
	bool loop = true;
	string input = "";

	// So this is the AdjacencyMatrix container k?
	Matrix *matrix;
	
	while (loop) {
		cout << "floyd> ";
		cin >> input;
		
		if (!input.compare("quit") || !input.compare("exit")) {
			loop = false;
		}
		else if (!input.compare("floyd")) {
			// User sets Matrix dimensions
			int n; cin >> n;
			// Program creates new Matrix and runs Floyd Algorithm
			matrix = new Matrix(n);
			matrix->runFloyd();
		}
		else {
			duhError();
		}
	}

	return 0;
}

