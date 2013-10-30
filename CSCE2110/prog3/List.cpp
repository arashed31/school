/*
	Ahmad Rashed
	CSCE 2110.002
	Program 3 - Graphs
	List.cpp
*/

#include "List.h"

List::List()
{
	root = NULL;
}

void List::addNode(int d, int w)
{
	// node for traversing
	Node *n = root;
	// newly created node
	Node* newNode = new Node(d, w);
	
	// check if list is empty
    if(n == NULL)
	{
		// list is empty, nextNode is the root
		root = newNode;
    }
	else
	{
		// while no match keep searching for the end of the list
		while(n->destination != d && n->weight != w)
		{
			if (n->next != NULL)
				// Set "next" Node to the current "n" Node
				n = n->next;
			else
				// Point the current "n" Node's "next" Node to the "newNode"
				n->next = newNode;
		}
		// in the case that an edge exists but the weight has changed, the weight is updated. 
		if (n->destination == d && n->weight != w)
			n->weight = w;
	}
}

void List::delNode(int d)
{
	Node *n = root;
	if (n == NULL)
	{
		cout << "Error! Edge does not exist." << endl;
	}
	else
	{
		// keep track of the parent node
		Node *parent;
		while(n != NULL)
		{
			// search
			if (n->destination == d)
			{
				// can't delete the root node
				if(n == root)
				{
					root = n->next;
					return;
				}
				// yep
 				parent->next = n->next;
				return;
			}
			else
			{
				parent = n;
				n = n->next;
			}
		}
		cout << "Error! Element does not exist." << endl;
    }
}

void List::printList(int i)
{
    Node *n = root;
	while(n != NULL)
	{
		// lol
		cout << "(" << i << ",";
		n->printNode(); // and then this, watch... (Node.cpp Ln:26)
		n = n->next;
	}
}