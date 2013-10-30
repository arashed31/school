/*
 Program 2
 List.cpp
 */

#include "List.h"

List::List()		// Default constructor for Root Node
{
	root = NULL;
	count = 0;
}

void List::clearNode()
{
	root = NULL;
	count = 0;
}

int List::getNodeCount()
{
	return count;
}

Node* List::searchNode(string S)
{
	// Temp Node to be used as my active working space
	Node *n = root;
	while(n != NULL)
	{
		if (n->getStr() == S)
			return n;
		else
			n = n->getNext();
	}
	return NULL;
}

void List::addNode(string S)
{
	// Temp Node to be used as my active working space
	Node *n = root;

	Node* nextNode = new Node(S, NULL);
	
	// check if list is empty
    if(n == NULL)
	{
		root = nextNode;	// since list is empty, nextNode is set as root
    }
	// list is not empty
    else
	{
		// run through to reach end of List
		while(n->getNext() != NULL)
		{
			n = n->getNext();
		}
		// Point the last node to the new node
		n->setNext(nextNode);
    }
	count++;
}

void List::delNode(string S)
{
	// Temp Node to be used as my active working space
	Node *n = root;
	
	// Check if the List is empty
    if (n == NULL)
	{
		cout << "Error! List is empty." << endl;
	}
	else
	{
		Node *temp;
		while(n != NULL)
		{
			if (n->getStr() == S)
			{
				if(n == root)
				{
					root = n->getNext();
					count--;
					return;
				}
 				temp->setNext(n->getNext());
				count--;
				return;
			}
			else
			{
				temp = n;
				n = n->getNext();
			}
		}
		cout << "Error! Element does not exist." << endl;
    }
}

void List::toString()
{
	// Temp Node to be used as my active working space
    Node *n = root;		

	// List is empty if it points to NULL
	if (n == NULL)
	{
		cout << "Error! List is empty." << endl;	
		return;
	}

	// List is not empty at this point so begin printing
	while(n->getNext() != NULL)
	{
		cout << n->getStr() << "-";
		n = n->getNext();
	}
	cout << n->getStr() << endl;
}