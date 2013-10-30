/*
	Ahmad Rashed
	CSCE1030.307
	Lab 3
	- - - - - - - - - - - - - - - - - - - - -
	Description: Outputs twelve numbers in a grid.
*/

#include <stdio.h>

int main () {
	float numbers[12];
	int i;
	printf("Input: ");
	for(i = 0; i < 12; i++){
		printf("Enter number %d: ", i+1); scanf("%f", &numbers[i]);
	}
	printf("Output: ");
	printf("-------------------------\n");
	printf("| %5.2f | %5.2f | %5.2f |\n", numbers[11], numbers[10], numbers[9]);
	printf("-------------------------\n");
	printf("| %5.2f | %5.2f | %5.2f |\n", numbers[8], numbers[7], numbers[6]);
	printf("-------------------------\n");
	printf("| %5.2f | %5.2f | %5.3f |\n", numbers[5], numbers[4], numbers[3]);
	printf("-------------------------\n");
	printf("| %5.3f | %5.3f | %5.3f |\n", numbers[2], numbers[1], numbers[0]);
	printf("-------------------------\n");

	return 0;
}
