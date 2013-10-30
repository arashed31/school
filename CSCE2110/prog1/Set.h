/*
	Ahmad Rashed
	CSCE 2110.002
	Program 1 - Sets
	Set.h

	Header for Set.cpp
*/

#define SIZE 13	// size of the sets/universe

#include <iostream>
#include <string>
using namespace std;

class Set
{
public:
	Set(void);

	// "setters & getters" lol
	void set(int,int);
	bool get(int);

	// standard functions
	void setPrint();
	void setClear();

private:
	// where the set members are stored
	bool members[SIZE];
};
