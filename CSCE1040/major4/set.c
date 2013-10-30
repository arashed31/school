#include "header.h"

void setUnion(Set set1, Set set2, Set result) {
	int i;
	for(i = 0; i < 10; i++) {
		result[i] = (set1[i] | set2[i]);
	}
	printf("Union Something \n");
}

void setIntersection(Set set1, Set set2, Set result) {
	int i;
	for(i = 0; i < 10; i++) {
		result[i] = (set1[i] & set2[i]);
	}
	printf("Intersect Something \n");
}

void clearSet(Set set) {
	int i;
	for(i = 0; i < 10; i++) {
		set[i] = 0;
	}
}

void add2Set(Set set, int value) {
	int index = (value / 32);
	int position = (value % 32);
	if(isMember(set, value) == 0) {
		set[index] |= (1 << position);
	}
	printf("Added to Set \n");
}

int isMember(Set set, int element) {
	int index = (element / 32);
	int position = (element % 32);

	if(element < 0)
		return -1;
	else
		return ((set[index] & (1 << position)) >> position);
}

void printSet(Set set) {
	printf("Print something... unfinished");
/*
	int i = 0, j = 0;

	for(i = 0; i < 10; i++) {
		for(j = 0; j < 32; j++) {
			if((set[i] & (1 << j))) {
					printf("%s \n", names[((i * 32) + j)]);
			}
		}
	}
*/
}

