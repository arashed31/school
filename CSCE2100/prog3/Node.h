/*
	Ahmad Rashed
	Program 3
	Node.h
*/

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Node
{
private:
    int num;
    Node* left;
	Node* right;
public:
	Node();
	Node(int);

	int getNum();
	Node* getLeft();
	Node* getRight();
	void setNum(int);
	void setLeft(Node*);
	void setRight(Node*);

	bool isLeaf();
};

