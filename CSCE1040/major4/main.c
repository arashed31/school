#include "header.h"

int main() {
	int i, num, cNum;
	char temp1[257], temp2[257], classString[12], buffer[80], call[80], test[80], next[80];
	stack s;
	Set dset;
	initStack(&s);

	DBRecord **students;

	scanf("%d", &num);
	printf("%d \n", num);

    students = (DBRecord **) malloc(num * sizeof(DBRecord *));

	for(i = 0; i < num; i++) {
		students[i] = (DBRecord *) malloc (sizeof(DBRecord));
		students[i]->bitID = i;
		scanf("%s %s %s %d %s %f %d", temp1, temp2, students[i]->idNum, &students[i]->age, classString, &students[i]->gpa, &students[i]->expectedGrad);

		//  allocate space for character strings, and copy the strings */
		students[i]->lName = (char *) malloc(strlen(temp1) + 1);
		strcpy(students[i]->lName, temp1);
		students[i]->fName = (char *) malloc(strlen(temp2) + 1);
		strcpy(students[i]->fName, temp2);

		// set the year field from the strings of Class values
		if( (strcmp(classString,"firstYear")) == 0 )
			students[i]->year = firstYear;

		else if( (strcmp(classString,"sophmore")) == 0 )
			students[i]->year = sophomore;

		else if( (strcmp(classString,"junior")) == 0 )
			students[i]->year = junior;

		else if( (strcmp(classString,"senior")) == 0 )
			students[i]->year = senior;

		else if( (strcmp(classString,"grad")) == 0 )
			students[i]->year = grad;

		else
			assert(0);

	}
	printf("Done scanning \n");

	while (scanf("%s", buffer) != EOF) {
		if (strcmp(buffer, "create") == 0) {
			clearSet(dset);
			scanf("%s", call);
			scanf("%s", test);

			if (strcmp(call, "lastName") == 0) {
				scanf("%s", next);
				if (strcmp(test, "=") == 0) {
					for(i = 0; i < num; i++) {
						if (strcmp(students[i]->lName, next) == 0)
							add2Set(dset, students[i]->bitID);
					}
				}
				if (strcmp(test, "<") == 0) {
					for(i = 0; i < num; i++) {
						if (strcmp(students[i]->lName, next) < 0)
							add2Set(dset, students[i]->bitID);
					}
				}
				if (strcmp(test, ">") == 0) {
					for(i = 0; i < num; i++) {
						if (strcmp(students[i]->lName, next) > 0)
							add2Set(dset, students[i]->bitID);
					}
				}
			}
			if (strcmp(call, "firstName") == 0) {
				scanf("%s", next);
				if (strcmp(test, "=") == 0) {
					for(i = 0; i < num; i++) {
						if (strcmp(students[i]->fName, next) == 0)
							add2Set(dset, students[i]->bitID);
					}
				}
				if (strcmp(test, "<") == 0) {
					for(i = 0; i < num; i++) {
						if (strcmp(students[i]->fName, next) < 0)
							add2Set(dset, students[i]->bitID);
					}
				}
				if (strcmp(test, ">") == 0) {
					for(i = 0; i < num; i++) {
						if (strcmp(students[i]->fName, next) > 0)
							add2Set(dset, students[i]->bitID);
					}
				}
			}
			if (strcmp(call, "idNum") == 0) {
				scanf("%s", next);
				if (strcmp(test, "=") == 0) {
					for(i = 0; i < num; i++) {
						if (strcmp(students[i]->idNum, next) == 0)
							add2Set(dset, students[i]->bitID);
					}
				}
				if (strcmp(test, "<") == 0) {
					for(i = 0; i < num; i++) {
						if (strcmp(students[i]->idNum, next) < 0)
							add2Set(dset, students[i]->bitID);
					}
				}
				if (strcmp(test, ">") == 0) {
					for(i = 0; i < num; i++) {
						if (strcmp(students[i]->idNum, next) > 0)
							add2Set(dset, students[i]->bitID);
					}
				}
			}
			if (strcmp(call, "age") == 0) {
				scanf("%d", &cNum);
				if (strcmp(test, "=") == 0) {
					for(i = 0; i < num; i++) {
						if(students[i]->age == cNum)
							add2Set(dset, students[i]->bitID);
					}
				}
				if (strcmp(test, "<") == 0) {
					for(i = 0; i < num; i++) {
						if(students[i]->age == cNum)
							add2Set(dset, students[i]->bitID);
					}
				}
				if (strcmp(test, ">") == 0) {
					for(i = 0; i < num; i++) {
						if(students[i]->age == cNum)
							add2Set(dset, students[i]->bitID);
					}
				}
			}
			if (strcmp(call, "year") == 0) {
				scanf("%d", &cNum);
				if (strcmp(test, "=") == 0) {
					for(i = 0; i < num; i++) {
						if(students[i]->year == cNum)
							add2Set(dset, students[i]->bitID);
					}
				}
				if (strcmp(test, "<") == 0) {
					for(i = 0; i < num; i++) {
						if(students[i]->year == cNum)
							add2Set(dset, students[i]->bitID);
					}
				}
				if (strcmp(test, ">") == 0) {
					for(i = 0; i < num; i++) {
						if(students[i]->year == cNum)
							add2Set(dset, students[i]->bitID);
					}
				}
			}
			if (strcmp(call, "gpa") == 0) {
				scanf("%d", &cNum);
				if (strcmp(test, "=") == 0) {
					for(i = 0; i < num; i++) {
						if(students[i]->gpa == cNum)
							add2Set(dset, students[i]->bitID);
					}
				}
				if (strcmp(test, "<") == 0) {
					for(i = 0; i < num; i++) {
						if(students[i]->gpa == cNum)
							add2Set(dset, students[i]->bitID);
					}
				}
				if (strcmp(test, ">") == 0) {
					for(i = 0; i < num; i++) {
						if(students[i]->gpa == cNum)
							add2Set(dset, students[i]->bitID);
					}
				}
			}
			if (strcmp(call, "expectedGrad") == 0) {
				scanf("%d", &cNum);
				if (strcmp(test, "=") == 0) {
					for(i = 0; i < num; i++) {
						if(students[i]->expectedGrad == cNum)
							add2Set(dset, students[i]->bitID);
					}
				}
				if (strcmp(test, "<") == 0) {
					for(i = 0; i < num; i++) {
						if(students[i]->expectedGrad == cNum)
							add2Set(dset, students[i]->bitID);
					}
				}
				if (strcmp(test, ">") == 0) {
					for(i = 0; i < num; i++) {
						if(students[i]->expectedGrad == cNum)
							add2Set(dset, students[i]->bitID);
					}
				}
			}
			push(&s, dset);
			printf("Created & Pushed Set \n");
		}
		if (strcmp(buffer, "union")) {
			Set uset1, uset2, urset;
			memcpy(uset2, pop(&s), 10 * sizeof(unsigned int));
			memcpy(uset1, pop(&s), 10 * sizeof(unsigned int));
			setUnion(uset1, uset2, urset);
			push(&s, urset);
			printf("Pushed Set \n");
		}
		if (strcmp(buffer, "intersection")) {
			Set iset1, iset2, irset;
			memcpy(iset2, pop(&s), 10 * sizeof(unsigned int));
			memcpy(iset1, pop(&s), 10 * sizeof(unsigned int));
			setIntersection(iset1, iset2, irset);
			push(&s, irset);
			printf("Pushed Set \n");
		}
		if (strcmp(buffer, "print")) {
			Set pset;
			memcpy(pset, pop(&s), 10 * sizeof(unsigned int));
			printSet(pset);
		}
		
	}
}
