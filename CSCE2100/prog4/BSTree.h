/*
 Ahmad Rashed
 Program 4
 BSTree.h
*/

#include <iostream>
#include <string>
using namespace std;

#define SIZE 16		// :3

class BSTree
{
public:
	BSTree();
	int search(int);
	void insertVal(int, int);
	void deleteVal(int);
	void printTree();
	void clearTree();
private:
	int data[SIZE];			// array of data
	int replacement(int);	// private method for deleting
};
