/*
	Ahmad Rashed
	CSCE1030.307
	Lab 7
	- - - - - - - - - - - - - - - - - - - 
	Description: Returns the answer to a user-defined power function. 
*/

#include <stdio.h>

int main() {
	int num, pwr, i, j;
	printf("Input: \n");
	printf("Enter a number = "); scanf("%d", &num);
	printf("Enter a power  = "); scanf("%d", &pwr);
	i = num; j = pwr;
	
	while(j > 1) {
		i *= i;
		j--;
	}
	printf("\nOutput: \n");
	printf("%d ^ %d = %d \n", num, pwr, i);

	return 0;
}
