/*
  Your name
  CSCE1030.30#
  Lab #
  - - - - - - - - - - - - - - - - - - - 
  Description: Takes four grades, finds the average, and then builds a table with letter grades.
*/

#include <stdio.h>

char findletter(int n);

int main () {
	int grade[4], i = 0, sum = 0;
	char grades[4];

	printf("\nInput: \n");
	for(i = 0; i < 4; i++){
		printf ("Enter grade %d: ", i+1);
		scanf("%d", &grade[i]);

		grades[i] = findletter(grade[i]);
		sum += grade[i];
	}

	printf("\nOutput: \n");
	printf("------------------------\n");
	for(i = 0; i < 4; i++){
		printf("|    grade %d | %3d | %c |\n", i+1, grade[i], grades[i]);
		printf("------------------------\n");
	}

	double avg = sum/4;
	printf("************************\n");
	printf("| Average |  %5.2f | %c |\n", avg, findletter(avg));
	printf("************************\n");

	return 0;
}

char findletter(int n){
	if(n > 89)
		return 'A';
	if(n > 79)
		return 'B';
	if(n > 69)
		return 'C';
	if(n > 59)
		return 'D';
	if(n > 00)
		return 'F';

	return 'Z';
}
