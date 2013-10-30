/*
	Ahmad Rashed
	Program 3
	Node.cpp
*/

#include "Node.h"

Node::Node(int N)
{
	num = N;
	left = NULL;
	right = NULL;
}

int Node::getNum()
{
	return num;
}

Node* Node::getLeft()
{
	return left;
}

Node* Node::getRight()
{
	return right;
}

void Node::setNum(int N)
{
	num = N;
}

void Node::setLeft(Node* N)
{
	left = N;
}

void Node::setRight(Node* N)
{
	right = N;
}

bool Node::isLeaf()
{
	if(left == NULL && right == NULL)
		return true;
	else
		return false;
}