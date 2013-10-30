/*
	Ahmad Rashed
	Program 3
	BTree.cpp
*/

#include "BSTree.h"

BSTree::BSTree()
{
	root = NULL;
	count = 0;
}

Node* BSTree::getRoot()
{
	return root;
}

Node* BSTree::searchNode(int N)
{
	Node *temp = s_tmp = root;

	while (temp != NULL)
	{
		if (N == temp->getNum())	// check root node
			return temp;

		s_tmp = temp;				// parent node (used in delete)
		if (N < temp->getNum())
			temp = temp->getLeft();
		else
			temp = temp->getRight();
	}
	return NULL;
}

Node* BSTree::deleteNode(int N)
{
	Node *found;
	found = searchNode(N);
	
	if(found == NULL)
		return NULL;

	if(found->isLeaf())	// check if node is a leaf
	{
		if (found == root)	// check if node is also root
			root = NULL;
		else if (s_tmp->getLeft() == found)	// go to parent, delete L or R
			s_tmp->setLeft(NULL);
		else
			s_tmp->setRight(NULL);
		count--;
		return found;
	}
	else if(found->getLeft())		// defaults to Left node for deleting
	{
		s_tmp = found->getLeft();
		while(s_tmp->getRight())
			s_tmp = s_tmp->getRight();
		int a = s_tmp->getNum();
		deleteNode(s_tmp->getNum());		// recursion!!!
		found->setNum(a);
		count--;
		return found;
	}
	else if(found->getRight())
	{
		s_tmp = found->getRight();
		while(s_tmp->getLeft())
			s_tmp = s_tmp->getLeft();
		int a = s_tmp->getNum();
		deleteNode(s_tmp->getNum());		// recursion!!!
		found->setNum(a);
		count--;
		return found;
	}
	else
	{
		std::cout << "Error! Something isn't right." << endl;
		return NULL;
	}
}

void BSTree::insert(int N)
{
	if (root == NULL)
		root = new Node(N);
	else
	{
		if (searchNode(N))
			std::cout << "Error! Element exists." << endl;
		else
		{
			if (N < s_tmp->getNum())
				s_tmp->setLeft(new Node(N));
			else
				s_tmp->setRight(new Node(N));
		}
	}
	count++;
}

void BSTree::toString(Node* N)		// inorder
{
	if (N == NULL)
		return;
	toString(N->getLeft());					// moar recursion!!!
	if (N->getLeft())
		cout << "-";
	cout << N->getNum();
	if (N->getRight())
		cout << "-";
	toString(N->getRight());				// moar recursion!!!
}

int BSTree::findHeight(Node* N)
{
	if (N == NULL)
		return 0;
	return 1 + max(findHeight(N->getLeft()), findHeight(N->getRight()));
}