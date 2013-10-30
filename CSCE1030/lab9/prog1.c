/*
	Ahmad Rashed
	CSCE1030.307
	Lab 9
	- - - - - - - - - - - - - - - - - - - 
	Description: Detects if a number entered (between 2 and 1000) is prime.
*/

#include <stdio.h>

int main() {
	int num, i = 0, test = 1, prime = 1;

	printf("Input: \n");

	do{
		printf("Enter a number between 2 and 1000: "); scanf("%d", &num);
		if(num < 1000 && num > 2)
			test = 0;
		else
			printf("That's not a number between 2 and 1000, try again. \n\n");
	} while(test);

	for(i = 2; i < num; i++) {
		if(num % i == 0)
			prime = 0;
	}

	printf("Output: \n");

	if(prime == 0)
		printf("The number you have entered, %d, IS NOT prime. \n\n", num);
	else
		printf("The number you have entered, %d, IS prime. \n\n", num);

	return 0;
}
