/*
	Ahmad Rashed
	ahmadrashed@my.unt.edu
	CSCE 1040 - Major 2
	CSP 04
 */

#include "set.h"
#include "sortAndSearch.h"

void bubbleSort(char str[][30], int len) {
	int i, j;

	for(i = 0; i < len-1; i++) {
		for(j = 0; j < len-i-1; j++) {
			if((!isNull(str[j])) && (!isNull(str[j+1])) && (strcmp(str[j], str[j+1]) > 0)) {
				swap(str[j], str[j+1], 30);
			}
		}
	}
}

/*
	isNull prevents segmentation fault
*/

void swap(char *str1, char *str2, int len) {
	char strtmp[len];
	strcpy(strtmp, str1);
	strcpy(str1, str2);
	strcpy(str2, strtmp);
}

