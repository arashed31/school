/*
	Ahmad Rashed
	CSCE1030.307
	Lab 12
	- - - - - - - - - - - - - - - - - - - 
	Description: Learning recursion.
*/

#include <stdio.h>

void CountDown(int start) {
	printf("%d \n", start);
	if(start > 1)
		CountDown(start-1);
}

int main () {
	int num;
	printf("Input: \n");
	printf("Enter a number to count down from: "); scanf("%d", &num);

	printf("Output: \n");
	CountDown(num);

	return 0;
}
