/*
 Program 2
 List.h
 */

#include "Node.h"

class List
{
private:
	Node *root;
	int count;
public:
	List();
    
	void clearNode();
	int getNodeCount();

	Node* searchNode(string);
	void addNode(string);
	void delNode(string);
	void toString();
};