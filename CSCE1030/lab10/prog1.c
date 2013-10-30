/*
	Ahmad Rashed
	CSCE1030.307
	Lab 10
	- - - - - - - - - - - - - - - - - - - 
	Description: Playing with strings in C. 
*/

#include <stdio.h>
#include <string.h>

int main() {
	char s1[] = "This", s2[] = "Class", result[64];
	
	printf("s1 = %s \n", s1);
	printf("s2 = %s \n", s2);
	
	strcpy(result, s1);
	strcat(result, " ");
	strcat(result, s2);
	
	printf("result = %s \n", result);
	printf("result = %s is Amazing. \n", result);

	return 0;
}
