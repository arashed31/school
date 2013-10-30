#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

class Student
{
private:
	int idnum;
	string name;
	string classification;

public:
	Student();
	Student(int, string, string);
	~Student();

	void setID(int);
	void setName(string);
	void setClass(string);

	int getID();
	string getName();
	string getClass();
	void toString();
};

