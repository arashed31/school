#include "Student.h"

int enrollCount = 0;
Student *students[7];	// pointer to array of students

void enroll()
{
	if(enrollCount >= 7)
		cout << "Error! Class is full." << endl;

	else
	{
		int tempID;
		string tempN, tempC;

		cout << "class> Enroll student:" << endl;

		cin >> tempID >> tempN >> tempC;
		students[enrollCount] = new Student(tempID, tempN, tempC);

		enrollCount++;
	}
}

void drop()
{
	if(enrollCount == 0)
		cout << "Error! Class is empty." << endl;	// check if class is empty before dropping students

	else
	{
		int tempID, found = 8;		// found = 8 for false

		cout << "class> Enter ID:" << endl;
		cin >> tempID;

		for(int i = 0; i < enrollCount; i++)
		{
			if(students[i]->getID() == tempID)
			{
				found = i;	// found is set to i if search is successful
			}
		}

		if(found == 8)
			cout << "Error! Invalid ID." << endl;

		else
		{
			while (found < enrollCount)
			{
				students[found] = students[found+1];	// start from found = i, shift all entries "left" until enrollCount
				found++;
			}
			enrollCount--;
		}
	}
}

void roster()
{
	if(enrollCount == 0)
		cout << "Error! Class is empty." << endl;

	else
	{
		for (int i = 0; i < enrollCount; i++)
		{
			students[i]->toString();	// made my own toString function

			if(i+1 < enrollCount)		// throw in commas after all entries but the last
				cout << ", ";
		}
		cout << endl;
	}
}

int main() 
{
	bool loop = true;
	string buffer;

	while (loop)
	{
		cout << "class> ";
		cin >> buffer;

		if(buffer.compare("quit") == 0)
			loop = false;
		else if(buffer.compare("enroll") == 0)
			enroll();
		else if(buffer.compare("drop") == 0) 
			drop();
		else if(buffer.compare("roster") == 0)
			roster();
		else 
			cout << "Error! Unrecognized command." << endl;
	}

	return 0;
}

