/*
	Ahmad Rashed
	CSCE 2110.002
	Program 3 - Graphs
	Node.h
*/

#include <iostream>
#include <string>
using namespace std; 

class Node
{
public:
	// Constructors
	Node(void);
	Node(int, int);

	// Functions
	void printNode();

	// Data
	int destination;
	int weight;
	Node* next;
};
