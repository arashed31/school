/*
	Ahmad Rashed
	CSCE1030.307
	Lab 11
	- - - - - - - - - - - - - - - - - - - 
	Description: Fun with two dimentional arrays.
*/

#include <stdio.h>
int row = 4, col = 4;

int main () {
	int nums[row][col];
	int i, j, x, sum = 0;

	for(i = 0; i < row; i++) {
		for(j = 0; j < col; j++) {
			nums[i][j] = 0;
		}
	}

	for(x = 0; x < 4; x++) {
		nums[0][x] += 5;
		nums[2][x] += 2;
		nums[2][x] *= 3;
		nums[x][1] += 2;
	}
	
	for(i = 0; i < row; i++) {
		for(j = 0; j < col; j++) {
			printf("%d ", nums[i][j]);
		}
		printf("\n");
	}

	for(x = 0; x < 4; x++) {
		sum += nums[x][x];
	}
	
	printf("%d \n", sum);

	return 0;
}
