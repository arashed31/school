// ************************************************************************
// 
//	stringBubble.c --- bubbleSort function, oddly enough does a bubble sort
//                   on an array of ints.
// 
//	History:  Written by P. Sweany on 2/26/12 
// 
// ************************************************************************
#include <stdio.h>
#include <stdlib.h>
#include "sortAndSearch.h"

void swap (char *, char *);

void bubbleSort(char A[][30], int num) {
	int i,j;
	int temp;

	for(i = 0; i < num-1; i++) {
		for(j = 0; j < num-i-1; j++) {
			if (strcmp(A[j], A[j+1]) > 0 ) {
				swap (A[j],A[j+1]);
			}
		}
	}
}

void swap (char *s1, char *s2) {
    char temp[30];
    temp[0] = '\0';
    strcpy(temp,s1); 
    strcpy(s1,s2); 
    strcpy(s2,temp); 
    return;
}

