/*
	Ahmad Rashed
	aar0129@my.unt.edu
	Minor Assignment #3
*/

#include <stdio.h>
#include <stdlib.h>

void printabit();

int main(){
	unsigned int
		i,
		j,
		map,
		ones,
		x;

	for (i = 0; i < 10; i++) {
		x = random();
		map = 1;
		ones = 0;
		for (j = 0; j < 32; j++) {
			if (x & map) ones++;
			map <<= 1;
		}
	printabit(x);
	printf ("  %10d, %x has %d 1s \n", x, x, ones);
	}
}

void printabit(int n) {
	unsigned int k;
	k = 1<<(sizeof(n) * 8 - 1);

	while (k > 0) {
		if (n & k)
			printf("1");
		else
			printf("0");
		k >>= 1;
	}
}
