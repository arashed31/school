/*
	Name: Ahmad Rashed
	Course: CSCE1030.001
	
	- - - - - - - - - - - - - - - - - - - 
	Description: Fun with strings and shit.
*/

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
	int cnt = 0, i, j;
	int caps = 0, sentence = 0, c_word = 0, s_word = 0, m_word = 0, l_word = 0;
	char str[64];

	printf("CSE 1030 Program Three - Ahmad Rashed - arashed31@gmail.com - CSP03 \n\n");

	while (scanf("%s", str) != EOF) {			// scan by word
		for(i = 0; i < strlen(str); i++) {		// parse letter by letter 
			if(str[i] > 64 && str[i] < 91) {
				caps++;
				str[i] = tolower(str[i]);		// convert to lower case for strcmp() later
			}
			if(str[i] == '!' || str[i] == '?' || str[i] == '.') {	// testing for full sentences
				sentence++;
				str[i+1] = '\0';	// chop off the rest of the word in case there's consecutive puntuation
			}
			if(!isalnum(str[i])){						// removing ALL punctuation
				for(j = i; j < strlen(str); j++) {
					str[j] = str[j+1];
				}
				i--;
			}
		}
/**
		printf("%s ", str);
		printf("- %d. \n", strlen(str));	// testing string length and punctuation removal
**/
		if(strlen(str) < 6)
			s_word++;
		if(strlen(str) > 5 && strlen(str) < 12)
			m_word++;
		if(strlen(str) > 11)
			l_word++;

		if(!strcmp(str, "a"))
			c_word++;
		if(!strcmp(str, "is"))
			c_word++;
		if(!strcmp(str, "of"))
			c_word++;
		if(!strcmp(str, "the"))
			c_word++;
		if(!strcmp(str, "are"))
			c_word++;
		if(!strcmp(str, "that"))
			c_word++;
	}

	printf("%d short length words \n", s_word);
	printf("%d medium length words \n", m_word);
	printf("%d long length words \n", l_word);
	printf("%d capitalized words \n", caps);
	printf("%d common words \n", c_word);
	printf("%d sentences \n", sentence);

	return 0;
}
