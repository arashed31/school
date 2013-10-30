/*
 Ahmad Rashed
 Program 4
 BSTree.cpp
*/

#include "BSTree.h"

BSTree::BSTree()
{
	for (int i = 0; i < SIZE; i++) {
		data[i] = -1;
	}
}

int BSTree::search(int n)
{
	int i;
	for (i = 0; i < SIZE; i++) {
		if (data[i] == n) {
			return i;
		}
	}
	return 0;
}

void BSTree::insertVal(int i, int n)
{
	if (data[i] == n) {		// prevent duplicates
		return;
	}

	if (i > SIZE)
		cout << "Error! Entry discarded; too large for array." << endl;
	
	if (data[i] == -1) {
		data[i] = n;
		return;
	}
	
	if (data[i] > n) {
		i = i * 2;
		insertVal(i, n);
	}
	else {
		i = (i * 2) + 1;
		insertVal(i, n);
	}
}

void BSTree::deleteVal(int n)
{
	int i = search(n), j, tmp;

	// deletes node if it's a leaf
	// bottom row of nodes are positions >= SIZE / 2
	if ((data[i*2] == -1 && data[i*2+1] == -1) || i*2 > SIZE)
		data[i] = -1;
	else {
		j = replacement(i);
		tmp = data[j];
		deleteVal(data[j]);
		data[i] = tmp;
	}
}

int BSTree::replacement(int i)		// replacment() finds suitable replacment node
{
	if (i*2 < SIZE)
	{
		if (data[i*2] != -1)
		{
			i = i * 2;
			while (i*2 + 1 < SIZE)
			{
				if (data[i*2 + 1] != -1)
					i = i*2 + 1;
				else
					return i;
			}
			return i;
		}
		else
		{
			i = i * 2 + 1;
			while (i*2 < SIZE)
			{
				if (data[i*2] != -1)
					i = i*2;
				else
					return i;
			}
			return i;
		}
	}
}

void BSTree::printTree()
{
	for (int i = 0; i < SIZE; i++) {	// simple output
		cout << data[i];
		if(i < SIZE - 1)
			cout << ",";
	}
	cout << endl;
}

void BSTree::clearTree()
{
	for (int i = 0; i < SIZE; i++) {
		data[i] = -1;
	}
}