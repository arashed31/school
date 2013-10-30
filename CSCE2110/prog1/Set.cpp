/*
	Ahmad Rashed
	CSCE 2110.002
	Program 1 - Sets
	Set.cpp

	Set Implementation
*/

#include "Set.h"

Set::Set(void)
{
	this->setClear();
}

void Set::set(int i, int n)
{
	members[i] = (bool) n;
	// cast to bool just because
}

bool Set::get(int i)
{
	return members[i];
	// basic value retrieval
}

void Set::setPrint()
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << members[i];
		if(i < SIZE-1)
			cout << "-";	// print hyphen after all but final members
	}
	cout << endl;
}

void Set::setClear()
{
	for (int i = 0; i < SIZE; i++)
	{
		members[i] = 0;
	}
}