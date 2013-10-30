/*
	Ahmad Rashed
	CSCE1030.307
	Lab 7
	- - - - - - - - - - - - - - - - - - - 
	Description: Case statements
*/

#include <stdio.h>

int main() {
	int i, grade, total = 0, average = 0;
	char letter_grade;

	do{
		printf("Enter five number grades for the student. \n\n"); 
		
		for(i = 0; i < 5; i++){
			printf("Enter grade %d: ", i+1); scanf("%d", &grade);
			total += grade;
		}

		average = (int)((total/5) + 0.9999999);
		
		if(average >= 0)
			letter_grade = 'F';
		if(average >= 60)
			letter_grade = 'D';
		if(average >= 70)
			letter_grade = 'C';
		if(average >= 80)
			letter_grade = 'B';
		if(average >= 90)
			letter_grade = 'A';
		if(average > 100 || average < 0)
			letter_grade = 'I';

		switch(letter_grade)
		{
			case 'A' : printf("Your grade is: %c! \n", letter_grade); break;
			case 'B' : printf("Your grade is: %c! \n", letter_grade); break;
			case 'C' : printf("Your grade is: %c! \n", letter_grade); break;
			case 'D' : printf("Your grade is: %c! \n", letter_grade); break;
			case 'F' : printf("Your grade is: %c! \n", letter_grade); break;
			case 'I' : printf("Your grade result was invalid, try again. \n\n"); break;
		}
	}
	while(letter_grade == 'I');
	
	return 0;
}
