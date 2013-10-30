#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

extern unsigned int setUnion(unsigned int set1, unsigned int set2);
extern unsigned int setIntersection(unsigned int set1, unsigned int set2);
extern void clearSet(unsigned int *set);
extern void add2set(unsigned int *set, int value);
extern void deleteFromSet(unsigned int *set, int value);
extern int isMember(unsigned int set, int element);
extern void printSet(unsigned int);
