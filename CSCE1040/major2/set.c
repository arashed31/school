/*
	Ahmad Rashed
	ahmadrashed@my.unt.edu
	CSCE 1040 - Major 2
	CSP 04
 */

#include "set.h"
#include "sortAndSearch.h"

char names[320][30];

void setUnion(Set set1, Set set2, Set result) {
	int i;
	for(i = 0; i < 10; i++) {
		result[i] = (set1[i] | set2[i]);
	}
}

void setIntersection(Set set1, Set set2, Set result) {
	int i;
	for(i = 0; i < 10; i++) {
		result[i] = (set1[i] & set2[i]);
	}
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
}

void deleteFromSet(Set set, int value) {
	int index = (value / 32);
	int position = (value % 32);
	if(isMember(set, value) >= 1) {
		set[index] &= ~(1 << position);
	}
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
	int i = 0, j = 0, column = 0;	// make 8 "columns" when printing

	printf("\n{");

	for(i = 0; i < 10; i++) {
		for(j = 0; j < 32; j++) {
			if((set[i] & (1 << j))) {

				if(column == 7) {
					printf("%s \n", names[((i * 32) + j)]);
					column = 0;
				}
				else {
					printf("%s, ", names[((i * 32) + j)]);
					column++;
				}
			}
		}
	}

	printf("}\n");
}

int nameIsMember(Set set, char *str) {
	int searchresult = binarySearch(names, str, 0, 320);
	int result = isMember(set, searchresult);
	if(result < 0)
		return 0;
	else
		return result;
}

void addName2Set(Set set, char *str) {
	int searchresult = binarySearch(names, str, 0, 320);
	add2Set(set, searchresult);
}

void deleteNameFromSet(Set set, char *str) {
	int searchresult = binarySearch(names, str, 0, 320);
	deleteFromSet(set, searchresult);
}

