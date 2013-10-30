#include <iostream>
#include <string>
using namespace std;

class Row
{
public:
	Row();
	Row(int,string,char);

	// data retrieval
	int getID();
	string getName();
	char getGrade();

	// LinkedList requirments
	Row* getNext();
	void setNext(Row*);

	// prints row according to (id,course,grade) NO ENDLINE
	void printRow();

private:
	int courseID;
	string courseName;
	char courseGrade;

	// pointer to next Row
	Row* next;
};

