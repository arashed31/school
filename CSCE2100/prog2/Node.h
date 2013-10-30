/*
 Program 2
 Node.h
 */

#include <iostream>
#include <string>
using namespace std;

class Node
{
private:
    string str;
    Node* next;
	
public:
    Node();
	Node(string, Node*);
    void setStr(string);
    void setNext(Node*);
	
    string getStr();
    Node* getNext();
};

