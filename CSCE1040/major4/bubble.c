#include "header.h"

void bubbleSort(DBRecord *A[], int num, Field f) {
	int i, j;
	for(i = 0; i < num-1; i++) {
		for(j = 0; j < num-i-1; j++) {
			if( compare(A[j],A[j+1],f) )
				swap (A,j,j+1);
		}
	}
}

Boolean compare(DBRecord *a, DBRecord *b, Field f) {
	switch (f) {
		case Age:
			if( a->age > b->age ) 
				return True;
			else 
				return False;

		case Year:
			if( a->year > b->year ) 
				return True;
			else 
				return False;

		case GPA:
			if( a->gpa > b->gpa ) 
				return True;
			else 
				return False;

		case GradYear:
			if( a->expectedGrad > b->expectedGrad ) 
				return True;
			else 
				return False;

		case LastName:
			if( strcmp(a->lName, b->lName) > 0 )
				return True;
			else 
				return False;

		case FirstName:
			if( strcmp(a->fName, b->fName) > 0 ) 
				return True;
			else 
				return False;

		case ID:
			if( strcmp(a->idNum, b->idNum) > 0 ) 
				return True;
			else 
				return False;

		default:
			printf("Unexpected field value %d\n",f);
			assert(0);
	}
}

void swap(DBRecord *A[], int i, int j) {
	DBRecord *temp;
	temp = A[i];
	A[i] = A[j];
	A[j] = temp;
}

