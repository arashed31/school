/*
	Ahmad Rashed
	ahmadrashed@my.unt.edu
	CSCE 1040 - Major 3
	CSP 04
*/

#include "main.h"
#include "sort.h"

void swap (DBRecord **x, DBRecord **y) {
	DBRecord *t = *x;
	*x = *y;
	*y = t;
}

void fNameSort(DBRecord *students[], int num) {
	int i, j;

	for(i = 0; i < num; i++) {
		for(j = 0; j < num-i-1; j++) {
			if (strcmp(students[j]->fName, students[j+1]->fName) > 0 )
				swap(&students[j], &students[j+1]);
		}
	}
}

void lNameSort(DBRecord *students[], int num) {
	int i, j;

	for(i = 0; i < num; i++) {
		for(j = 0; j < num-i-1; j++) {
			if (strcmp(students[j]->lName, students[j+1]->lName) > 0 )
				swap(&students[j], &students[j+1]);
		}
	}
}

void idNumSort(DBRecord *students[], int num) {
	int i, j;

	for(i = 0; i < num; i++) {
		for(j = 0; j < num-i-1; j++) {
			if (strcmp(students[j]->idNum, students[j+1]->idNum) > 0 )
				swap(&students[j], &students[j+1]);
		}
	}
}

void gpaSort(DBRecord *students[], int num) {
	int i, j;

	for(i = 0; i < num; i++) {
		for(j = 0; j < num-i-1; j++) {
			if (students[j]->GPA > students[j+1]->GPA)
				swap(&students[j], &students[j+1]);
		}
	}
}

void ageSort(DBRecord *students[], int num) {
	int i, j;

	for(i = 0; i < num; i++) {
		for(j = 0; j < num-i-1; j++) {
			if (students[j]->age > students[j+1]->age)
				swap(&students[j], &students[j+1]);
		}
	}
}

void gradYearSort(DBRecord *students[], int num) {
	int i, j;

	for(i = 0; i < num; i++) {
		for(j = 0; j < num-i-1; j++) {
			if (students[j]->gradyear > students[j+1]->gradyear)
				swap(&students[j], &students[j+1]);
		}
	}
}

void classSort(DBRecord *students[], int num) {
	int i, j;

	for(i = 0; i < num; i++) {
		for(j = 0; j < num-i-1; j++) {
			if (students[j]->Class < students[j+1]->Class)
				swap(&students[j], &students[j+1]);
		}
	}
}

void printStudent(DBRecord st) {
		printf("%s, %s: %s - %d - ", st.lName, st.fName, st.idNum, st.age);
		switch (st.Class) {
			case 0: printf("firstYear"); break;
			case 1: printf("sophomore"); break;
			case 2: printf("junior"); break;
			case 3: printf("senior"); break;
			case 4: printf("grad"); break;
			default : printf("What are you doing?!?!?!?"); break;
		}
		printf(" - %f - %d \n", st.GPA, st.gradyear);
}

