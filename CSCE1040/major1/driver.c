#include <stdio.h>

int main() {
	unsigned int set1=0, set2=0;
	unsigned int setU=0, setI=0;

	add2set(&set1, 17);
	add2set(&set1, 6);
	add2set(&set1, 0);
	add2set(&set1, 2);
	add2set(&set1, 14);
	add2set(&set1, 24);
	printf("Adding { 2, 6, 14, 17, 24, 0 } to set1. \n");
	
	add2set(&set2, 8);
	add2set(&set2, 6);
	add2set(&set2, 21);
	add2set(&set2, 17);
	add2set(&set1, 18);
	add2set(&set1, 4);
	printf("Adding { 4, 6, 8, 17, 18, 21 } to set2. \n");
	
	printf("\n");

	setU = setUnion(set1, set2);
	setI = setIntersection(set1, set2);
	printf("Set Union        = ");
	printSet(setU);
	printf("Set Intersection = ");
	printSet(setI);

	deleteFromSet(&set1, 17);
	printf("\nDeleting { 17 } from set1. \n\n");

	setU = setUnion(set1, set2);
	setI = setIntersection(set1, set2);
	printf("Set Union        = ");
	printSet(setU);
	printf("Set Intersection = ");
	printSet(setI);

	printf("\nIs 0 a member of set1? \nLet's see...\n");
	if (isMember(set1, 0))
		printf("Yes! 0 is included in set1. \n\n");
	else
		printf("NOPE! 0 is NOT included in set1. \n\n");

	printf("\nIs 11 a member of set2? \nLet's see...\n");
	if (isMember(set2, 11))
		printf("Yes! 11 is included in set2. \n\n");
	else
		printf("NOPE! 11 is NOT included in set2. \n\n");

	printf("Alright, let's clear set2. \n");
	clearSet(&set2);
	printf("Alright, let's print set2. \n");
	printSet(set2);

	return 0;
}
