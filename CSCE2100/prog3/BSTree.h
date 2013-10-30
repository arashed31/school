/*
	Ahmad Rashed
	Program 3
	BTree.h
*/

#include "Node.h"

class BSTree
{
private:
	Node *root, *s_tmp;
	int count;
public:
	BSTree();
	Node* searchNode(int);
	Node* deleteNode(int);
	Node* getRoot();
	void insert(int);
	void toString(Node*);
	int findHeight(Node*);
};