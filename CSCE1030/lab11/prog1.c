/*
	Ahmad Rashed
	CSCE1030.307
	Lab 11
	- - - - - - - - - - - - - - - - - - - 
	Description: Adds together the values of an integer array.
*/

#include <stdio.h>

int main () {
	int nums[10];
	int i, j = 1, sum = 0;

	for(i = 0; i < 10; i++) {
		nums[i] = j; j+=2;
	}

	for(i = 0; i < 10; i++) {
		sum += nums[i];
	}

	printf("The total values of the elements in this array is %d. \n", sum);

	return 0;
}
