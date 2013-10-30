/*
	Ahmad Rashed
	CSCE1030.307
	Lab 3
	- - - - - - - - - - - - - - - - - - - - -
	Description: Finds the largest and smallest numbers from those entered by the user.
*/

#include <stdio.h>
#include <float.h>

int main () {
	float largest = FLT_MIN, smallest = FLT_MAX, a;			// largest = smallest num possible, smallest = largest num possible
	int i;

	printf("\nEnter any set of ten numbers. \n\nInput: \n");

	for(i = 0; i < 10; i++){
		printf("Enter number %d: ", i+1); scanf("%f", &a);	// asks for the numbers 4 times

		if(a > largest)
			largest = a;		// checks if the number entered is larger or smaller than the others
		if(a < smallest)
			smallest = a;

	}

	printf ("\nOutput: \n");					/outputs the numbers
	printf	("Largest number is %.2f. \n", largest);
	printf	("Smallest number is %.2f. \n", smallest);

	return 0;
}
