/*
	Ahmad Rashed
	CSCE 2110.002
	Program 3 - Graphs
	Graph.h
*/

#include "List.h"

class Graph
{
public:
	Graph(int);

	void insert(int);
	void remove(int);
	void printGraph();

private:
	List* lists;
	int size;
};

