/*
	Ahmad Rashed
	CSCE1030.307
	Lab 7
	- - - - - - - - - - - - - - - - - - - 
	Description: Counts the number of integers that are multiples of 5 between 1 and 1000.
*/

#include <stdio.h>

int main() {
	int num = 1, count = 0;

	while(num <= 1000) {
		if(num%5 == 0) {
			count++;
		}
	num++;
	}

	printf("There are %d numbers between 1 and 1000 that are multiples of 5. \n", count);

	return 0;
}
