/*
	Ahmad Rashed
	CSCE1030.307
	Lab 12
	- - - - - - - - - - - - - - - - - - - 
	Description: Learning recursion.
*/

#include <stdio.h>

void CountUp(int start, int end) {
	printf("%d \n", start);
	if(start < end)
		CountUp(start+1, end);
}

int main () {
	int num;
	printf("Input: \n");
	printf("Enter a number to count up to: "); scanf("%d", &num);

	printf("Output: \n");
	CountUp(1, num);

	return 0;
}
