/*
	Ahmad Rashed
	CSCE1030.307
	Lab 9
	- - - - - - - - - - - - - - - - - - - 
	Description: Rolls a die 1000 times and returns the results. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int i, dice[6]; srand(time(NULL));

	for(i = 0; i < 6; i++) {
		dice[i] = 0;
	}

	for(i = 0; i < 1000; i++) {
		switch(rand() % 6 + 1) {
			case 1:
				dice[0]++; break;
			case 2:
				dice[1]++; break;
			case 3:
				dice[2]++; break;
			case 4:
				dice[3]++; break;
			case 5:
				dice[4]++; break;
			case 6:
				dice[5]++; break;
		}
	}

	printf("Input: \n (none) \n");
	printf("Output: \n");
	
	for(i = 0; i < 6; i++) {
		printf("%d appeared %d time(s). \n", i+1, dice[i]);
	}

	return 0;
}
