/*
	Ahmad Rashed
	CSCE1030.307
	Lab 11
	- - - - - - - - - - - - - - - - - - - 
	Description: Playing with functions.
*/

#include <stdio.h>
#include <limits.h>

int i, arraysize = 10;

int add(int array[]){ 
	int sum = 0;
	for(i = 0; i < arraysize; i++){
		sum += array[i];
	}
	return sum;
}

int multiply(int array[]){ 
	int product = 1;
	for(i = 0; i < arraysize; i++){
		product *= array[i];
	}
	return product;
}

int largest(int array[]){ 
	int larger = INT_MIN;
	for(i = 0; i < arraysize; i++){
		if(array[i] > larger)
			larger = array[i];
	}
	return larger;
}

int smallest(int array[]){ 
	int smaller = INT_MAX;
	for(i = 0; i < arraysize; i++){
		if(array[i] < smaller)
			smaller = array[i];
	}
	return smaller;
}

int main () {
	int nums[arraysize];

	printf("You will enter %d integers and this program will do stuff to them.\n\n", arraysize);

	for(i = 0; i < arraysize; i++) {
		printf("Enter number %d: ", i+1); scanf("%d", &nums[i]);
	}

	printf("The sum of these numbers is: %d \n", add(nums));
	printf("The product of these numbers is: %d \n", multiply(nums));
	printf("The largest of these numbers is: %d \n", largest(nums));
	printf("The smallest of these numbers is: %d \n", smallest(nums));

	return 0;
}
