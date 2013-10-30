/*
	Ahmad Rashed
	ahmadrashed@my.unt.edu
	CSCE 1040 - Minor 4
	CSP 04
*/

#include "minor4.h"

int main() {
	int i, num_students;

	Students **students;
	students = (Students **) malloc(num_students * sizeof(Students *));

	scanf("%d", &num_students);

	for (i = 0; i < num_students; i++) {
		students[i] = (Students *) malloc(sizeof(Students));
		students[i]->name = (char *) malloc(sizeof(scanf("%s")));
		scanf("%s %d %f", students[i]->name, &students[i]->id, &students[i]->avg);

		printStudent(*students[i]);
	}
	return 0;
}

void printStudent(Students st) {
	printf("Student Name: %s \n", st.name);
	printf("Student ID: %d \n", st.id);
	printf("Student Average: %f \n\n", st.avg);
}

