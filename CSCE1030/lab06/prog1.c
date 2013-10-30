/*
	Ahmad Rashed
	CSCE1030.307
	Lab 6
	- - - - - - - - - - - - - - - - - - - - -
	Description: Program 1 of Untitled Lab 6.
*/

#include <stdio.h>

int main () {
	int a, b;

	printf("\nEnter two integers with one space in between: "); scanf("%d %d", &a, &b);

	if((a + b) > 1000 || (a*b) > 4000) {
		printf("The sum of the two numbers is %d. The product of the two is %d. \n", a+b, a*b);
	}

	if((a+b) > 200 && (a%b) == 0) {
		printf("The sum of the two numbers is %d. The mod of the two is %d. \n", a+b, a%b);
	}

	return 0;
}
