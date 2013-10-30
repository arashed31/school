/*
	Ahmad Rashed
	CSCE 2110.002
	Program 3 - Graphs
	Graph.cpp
*/

#include "Graph.h"


Graph::Graph(int i)
{
	// Number of all nodes in the graph
	size = i;
	// Each Node on the Graph is a Linked List. 
	lists = new List[size];	
}

void Graph::insert(int s)
{
	int d, w;
	cin >> d >> w;
	// test bounds of user input 
	if (s >= size || d >= size || s < 0 || d < 0)
		cout << "Error! Node can not exist." << endl;
	else
		lists[s].addNode(d, w);
}

void Graph::remove(int s)
{
	int d;
	cin >> d;
	// test bounds of user input 
	if (d >= size || d < 0)
		cout << "Error! Node can not exist." << endl;
	else
		lists[s].delNode(d);
}

void Graph::printGraph()
{
	int i;
	for (i = 0; i < size; i++)
	{
		lists[i].printList(i);
	}
	cout << endl;
}
