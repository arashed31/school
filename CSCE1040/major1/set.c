#include "set.h"

extern unsigned int setUnion(unsigned int set1, unsigned int set2) {
	unsigned int result;
		result = set1 | set2;
	return result;
}

extern unsigned int setIntersection(unsigned int set1, unsigned int set2) {
	unsigned int result;
		result = set1 & set2;
	return result;
}

extern void clearSet(unsigned int *set) {
	*set = 0;
}

extern void add2set(unsigned int *set, int value) {
	*set = *set | (1 << value);
}

extern void deleteFromSet(unsigned int *set, int value) {
	*set = *set ^ (1 << value);
}

extern int isMember(unsigned int set, int element) {
	return (set&(1 << element));
}

extern void printSet(unsigned int set) {
	int p;
	printf("{ ");
	for (p = 0; p < 32; p++) {
		if (set & (1 << p))
			printf("%d ", p);
	}
	printf("} \n");
}
