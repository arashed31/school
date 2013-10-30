/*
	Ahmad Rashed
	ahmadrashed@my.unt.edu
	CSCE 1040 - Major 3
	CSP 04
*/

#include "main.h"
#include "sort.h"

int main() {
	int i, num_students;
	char temp1[256];	// string lengths defined by instructor
	char temp2[256];
	char tclass[10];
	DBRecord **students;	// pointer to pointer array
	scanf("%d ", &num_students);
	students = (DBRecord **) malloc(num_students * sizeof(DBRecord *));

	for (i = 0; i < num_students; i++) {
		students[i] = (DBRecord *) malloc (sizeof(DBRecord));

		scanf("%s %s %s %d %s %f %d", temp1, temp2, students[i]->idNum, &students[i]->age,
			tclass, &students[i]->GPA, &students[i]->gradyear);

		students[i]->index = i;
		students[i]->fName = (char *) malloc(strlen(temp1) + 1);
		students[i]->lName = (char *) malloc(strlen(temp2) + 1);
		strcpy(students[i]->fName, temp1);
		strcpy(students[i]->lName, temp2);

		if(!strcmp(tclass, "firstYear")) students[i]->Class = firstYear;
		if(!strcmp(tclass, "sophomore")) students[i]->Class = sophomore;
		if(!strcmp(tclass, "junior")) students[i]->Class = junior;
		if(!strcmp(tclass, "senior")) students[i]->Class = senior;
		if(!strcmp(tclass, "grad") ) students[i]->Class = grad;

		printStudent(*students[i]);
	}

	printf("\n\nSorted by Last Name \n");
	lNameSort(students, num_students);
	for(i = 0; i < num_students; i++)
		printStudent(*students[i]);

	printf("\n\nSorted by First Name \n");
	fNameSort(students, num_students);
	for(i = 0; i < num_students; i++)
		printStudent(*students[i]);

	printf("\n\nSorted by Student ID \n");
	idNumSort(students, num_students);
	for(i = 0; i < num_students; i++)
		printStudent(*students[i]);

	printf("\n\nSorted by Age \n");
	ageSort(students, num_students);
	for(i = 0; i < num_students; i++)
		printStudent(*students[i]);

	printf("\n\nSorted by Class \n");
	classSort(students, num_students);
	for(i = 0; i < num_students; i++)
		printStudent(*students[i]);

	printf("\n\nSorted by GPA \n");
	gpaSort(students, num_students);
	for(i = 0; i < num_students; i++)
		printStudent(*students[i]);

	printf("\n\nSorted by Expected Graduation Data \n");
	gradYearSort(students, num_students);
	for(i = 0; i < num_students; i++)
		printStudent(*students[i]);

	return 0;
}

