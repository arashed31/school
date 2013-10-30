/*
	Ahmad Rashed
	ahmadrashed@my.unt.edu
	CSCE 1040 - Major 2
	CSP 04
 */

#include "set.h"
#include "sortAndSearch.h"

int binarySearch(char array[][30], char *string, int begin, int end) {
	int mid = (begin + end) / 2;
	int result = 0;
	if((begin > end) || (begin < 0) || (end < 0) || isNull(string)) {
		return -1;
	}
	else if (isNull(array[mid])) {
		return binarySearch(array, string, begin, mid);
	}

	// Okay now we can search

	result = strcmp(string, array[mid]);

	if(result == 0)
		return mid;
	else if(abs(begin - end) < 2)
		return -1;
	else if(result < 0)
		return binarySearch(array, string, begin, mid);
	else
		return binarySearch(array, string, mid, end);
}

int isNull(char *str) {
	return ((!str) || (str == NULL) || (strcmp(str, "\0") == 0));
	// took me forever to find why I kept getting segfaults
}

