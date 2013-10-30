/*
 Program 2
 Node.cpp
 */

#include "Node.h"

Node::Node()
{
	Node::str = '\0';
	Node::next = 0;
}

Node::Node(string S, Node* N)
{
	Node::str = S;
	Node::next = N;
}

void Node::setStr(string S)
{
	str = S;
}

void Node::setNext(Node* P)
{
	next = P;
}

string Node::getStr()
{
	return str;
}

Node* Node::getNext()
{
	return next;
}

