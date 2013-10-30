/*
	Ahmad Rashed
	CSCE 2110.002
	Program 3 - Graphs
	Node.cpp
*/

#include "Node.h"

Node::Node(void)
{
	Node::next = NULL;
	Node::destination = -1;
	Node::weight = -1;
}

Node::Node(int d, int w)
{
	Node::next = NULL;
	Node::destination = d;
	Node::weight = w;
}

void Node::printNode()
{
	cout << destination << "," << weight << ")"; // ... tada!
}
