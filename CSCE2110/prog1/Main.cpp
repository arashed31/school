/*
	Ahmad Rashed
	CSCE 2110.002
	Program 1 - Sets
	Main.cpp
*/
#define NUM 3	// number of sets to create - requires modifying which()
#include "SetOps.h"

int main()
{
	bool loop = true;
	string input = "";
	
	Set Sets[NUM];	// this is genius - SEE: int which() 
	
	while (loop) {
		cout << "sets> ";
		cin >> input;
		
		if (!input.compare("quit")) {
			loop = false;
		}
		else if (!input.compare("assign")) {
			int s = which();
			if(s != -1)
				assign(&Sets[s]);
		}
		else if (!input.compare("union")) {
			int a = which();
			int b = which();
			if(a != -1 && b != -1)
				setUnion(&Sets[a],&Sets[b]);
		}
		else if (!input.compare("intersection")) {
			int a = which();
			int b = which();
			if(a != -1 && b != -1)
				setIntersection(&Sets[a],&Sets[b]);
		}
		else if (!input.compare("difference")) {
			int a = which();
			int b = which();
			if(a != -1 && b != -1)
				setDifference(&Sets[a],&Sets[b]);
		}
		else if (!input.compare("clear")) {
			int s = which();
			if(s != -1)
				Sets[s].setClear();
		}
		else if (!input.compare("print")) {
			int s = which();
			if(s != -1)
				Sets[s].setPrint();
		}
		else {
			cout << "Error! Improper input." << endl;
			cin.ignore(1024,'\n');	// clear excess contents from buffer
		}
	}

	return 0;
}

// Finds Set from user input 
int which()
{
	string str;
	cin >> str;
	if (!str.compare("R"))
		return 0;
	if (!str.compare("S"))
		return 1;
	if (!str.compare("T"))
		return 2;

	cout << "Error! Set not found." << endl;
	cin.ignore(1024,'\n'); // clear excess contents from buffer
	return -1;	// error code -1 = set not found
}

// scans SIZE number of times for user input
// uses pointer to set specified by user/which()
void assign(Set* pSet)
{
	int n;
	for (int i = 0; i < SIZE; i++)
	{
		cin >> n;
		pSet->set(i,n);		// booleans accept integer inputs
	}
}

// union of sets specified by user/which()
void setUnion(Set* A, Set* B)
{
	Set tset;	// temporary set
	for (int i = 0; i < SIZE; i++)
	{
		if(A->get(i) || B->get(i))
			tset.set(i,1);
	}
	tset.setPrint();
}

// intersection of sets specified by user/which()
void setIntersection(Set* A, Set* B)
{
	Set tset;	// temporary set
	for (int i = 0; i < SIZE; i++)
	{
		if(A->get(i) && B->get(i))
			tset.set(i,1);
	}
	tset.setPrint();
}

// difference of sets specified by user/which()
// temporary set begins with A and sets 0 for all B = 1
void setDifference(Set* A, Set* B)
{
	Set tset = *A;	// temporary set
	for (int i = 0; i < SIZE; i++)
	{
		if (B->get(i))
		{
			tset.set(i,0);
		}
	}
	tset.setPrint();
}
