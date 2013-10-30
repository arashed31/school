/*
	Ahmad Rashed
	CSCE1030.307
	Lab 7
	- - - - - - - - - - - - - - - - - - - 
	Description: Returns the factorial value of a number entered by the user. 
*/

#include <stdio.h>

int main() {
	int num, i;

	printf("Input: \n");
	printf("Enter a positive number to find its factorial value: "); scanf("%d", &num); i = num;
	
	while(i != 1) {
		i--;
		num = num * i;
	}

	printf("\nOutput: \n");
	printf("Your result is %d. \n", num);

	return 0;
}
