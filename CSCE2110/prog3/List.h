/*
	Ahmad Rashed
	CSCE 2110.002
	Program 3 - Graphs
	List.h
*/

#include "Node.h"

class List
{
private:
	Node *root;

public:
	List();

	void addNode(int, int);		// parameters: destination & weight
	void delNode(int);			// parameters: only need the destination
	void printList(int);		// prints the list, int is source
};

