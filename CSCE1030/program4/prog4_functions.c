#include <stdio.h>

void sort (int array[], int size) {
	int x, y, temp;

	for (x = 0; x < size; x++)
		for (y = 0; y < size-1; y++)
			if (array[y] > array[y+1]) {
				temp = array[y+1];
				array[y+1] = array[y];
				array[y] = temp;
			}
}	// Bubble Sort
