/*
	Ahmad Rashed
	CSCE1030.307
	Lab 12
	- - - - - - - - - - - - - - - - - - - 
	Description: Learning recursion.
*/

#include <stdio.h>

int factorial(int n) {
	if(n == 1)
		return n;
	else
		return n * factorial(n - 1);
}

int main () {
	int enter;
	printf("Input: \n");
	printf("Enter a number larger than 0 to find the factorial of: "); scanf("%d", &enter);

	printf("Output: \n");
	printf("%d \n", factorial(enter));

	return 0;
}
