#include "Table.h"


Table::Table(void)
{
	Table::root = NULL;
	Table::size = 0;
}

int Table::getSize()
{
	return size;
}

void Table::addRow()
{
	// nextRow is Row created from User Input
	Row* nextRow = makeRow();
	// temporary Row for processing
	Row *temp = root;

	if (temp == NULL)
		root = nextRow;
	else
	{
		while(temp->getNext() != NULL)
		{
			// checks every row for duplication
			if(temp->getID() == nextRow->getID() && !temp->getName().compare(nextRow->getName()) && temp->getGrade() == nextRow->getGrade())
				return;
			temp = temp->getNext();
		}
		// this if statement is for the special when the FIRST row is duplicated
		if(temp->getID() == nextRow->getID() && !temp->getName().compare(nextRow->getName()) && temp->getGrade() == nextRow->getGrade())
				return;	// I know what you're thinking. I'm sorry :(
		
		// if no duplicates, nextRow is added to List
		temp->setNext(nextRow);
	}
	size++;
}

void Table::delRow(int i)
{
	Row *r = root;
	// Check if the List is empty
    if (r == NULL)
	{
		cout << "Error! List is empty." << endl;
	}
	else
	{
		Row *parent;
		while(r != NULL)
		{
			if (r->getID() == i)
			{
				if(r == root)
				{
					root = r->getNext();
					size--;
					return;
				}
 				parent->setNext(r->getNext());
				size--;
				// quits loop to only delete first occurance
				return;
			}
			else
			{
				parent = r;
				r = r->getNext();
			}
		}
		// this line only executes when entire Table is processed with no matches
		cout << "Error! Element does not exist." << endl;
    }
}

void Table::searchID(bool b, int i)
{
	Row *r = root;
	while(r != NULL)
	{
		if (r->getID() == i)
		{
			if(b)
			{
				delRow(i);
				return;
			}
			else
				r->printRow();
		}
		r = r->getNext();
	}
	cout << endl;
}

void Table::searchName(bool b, string s)
{
	Row *r = root;
	while(r != NULL)
	{
		if (!r->getName().compare(s))
		{
			if(b)
			{
				delRow(r->getID());
				return;
			}
			else
				r->printRow();
		}
		r = r->getNext();
	}
	cout << endl;
}

void Table::searchGrade(bool b, char c)
{
	Row *r = root;
	while(r != NULL)
	{
		if (r->getGrade() == c)
		{
			if(b)
			{
				delRow(r->getID());
				return;
			}
			else
				r->printRow();
		}
		r = r->getNext();
	}
	cout << endl;
}

void Table::printTable()
{
	int c = 0;
	Row *r = root;
	while(r != NULL)
	{
		r->printRow();
		r = r->getNext();
	}
	cout << endl;
}

Row* Table::makeRow()
{
	int i;
	string s;
	char c;
	cin >> i;
	cin >> s; 
	cin >> c;
	return new Row(i,s,c);
	// didn't think that would work lol
}

