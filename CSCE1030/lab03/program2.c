/*
	Ahmad Rashed
	CSCE1030.307
	Lab 3
	- - - - - - - - - - - - - - - - - - - - -
	Description: Simply calculates car gas milage
*/

#include <stdio.h>

int main () {
	float gal, mil;

	printf("How many gallons did you fill: "); scanf("%f", &gal);
	printf("How many miles did you drive: "); scanf("%f", &mil);

	printf("\nYour car goes %.1f miles per gallon.\n", (mil/gal));

	return 0;
}
