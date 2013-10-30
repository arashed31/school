#include "Student.h"

Student::Student()
{
	Student::idnum = 0;
	Student::name += '\0';
	Student::classification += '\0';
}

Student::Student(int ID, string N, string C)
{
	Student::idnum = ID;
	Student::name = N;
	Student::classification = C;
}

Student::~Student()
{
	// am I supposed to put something here?
}

void Student::setID(int n)
{
	Student::idnum = n;
}

void Student::setName(string N)
{
	Student::name = N;
}

void Student::setClass(string C)
{
	Student::classification = C;
}

int Student::getID()
{
	return Student::idnum;
}

string Student::getName()
{
	return Student::name;
}

string Student::getClass()
{
	return Student::classification;
}

void Student::toString()
{
	std::cout << Student::idnum << "-" << Student::name << "-" << Student::classification;
}

