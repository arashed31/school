#include "Row.h"

Row::Row()
{
	Row::next = NULL;
	Row::courseID = 0;
	Row::courseName = '\0';
	Row::courseGrade = '\0';
}

Row::Row(int n, string s, char c)
{
	Row::next = NULL;
	Row::courseID = n;
	Row::courseName = s;
	Row::courseGrade = c;
}

int Row::getID()
{
	return courseID;
}

string Row::getName()
{
	return courseName;
}

char Row::getGrade()
{
	return courseGrade;
}

Row* Row::getNext()
{
	return Row::next;
}

void Row::setNext(Row* r)
{
	Row::next = r;
}

void Row::printRow()
{
	cout << "(" << courseID << "," << courseName << "," << courseGrade << ")";
}

