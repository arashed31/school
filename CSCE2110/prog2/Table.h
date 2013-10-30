#include "Row.h"

class Table
{
public:
	Table(void);
	int getSize();

	// very simple add or delete
	void addRow();
	void delRow(int);

	/* 
	search functions
	bool modifies search function behavior on row match:
		true = delete row
		false = print row
	*/
	void searchID(bool, int);
	void searchName(bool, string);
	void searchGrade(bool, char);

	// prints the whole Table
	void printTable();

private:
	// private function to create new Row & process information
	Row* makeRow();
	// pointer to first Row
	Row* root;
	// number of Rows in Table
	int size;
};

