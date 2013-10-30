/*
	Ahmad Rashed
	CSCE1030.307
	Lab 3
	- - - - - - - - - - - - - - - - - - - - -
	Description: Requires the user to enter five numbers (floats or doubles)
	and calculates the average of the numbers.
*/

#include <stdio.h>

int main () {
	printf("Type in five numbers WITH DECIMALS to find their combined average.\n\n");
	float num, sum = 0;
	int i, max = 5;

	for(i = 0; i < max; i++)
	{
		printf("Enter number %d: ", i+1); scanf("%f", &num);
		sum = sum + num;
	}

	printf("\nThe average of the entered numbers is %f\n", (sum/5));

	return 0;
}
