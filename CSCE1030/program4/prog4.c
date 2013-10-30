/*
	Name: Ahmad Rashed
	Course: CSCE1030.001
	
	- - - - - - - - - - - - - - - - - - - 
	Description: Program 4, quite hectic indeed. 
*/

#include <stdio.h>
#include "constants.h"

int scores[NUMBERofSTUDENTS][PGMSCORES];		// avoids passing arrays to functions

void inScan() {
	int a, b;
	for(a = 0; a < NUMBERofSTUDENTS; a++) {
		for(b = 0; b < PGMSCORES; b++) {
			scanf ("%d", &scores[a][b]);
		}
	}
}

float pAverage (int prog) {
	int c;
	float sum = 0;
	for(c = 0; c < NUMBERofSTUDENTS; c++) {
		sum += scores[c][prog];
	}
	return (sum/NUMBERofSTUDENTS);
}	// calculates class average per progam

float sAverage (int student) {
	int d;
	float sum = 0;
	for(d = 0; d < PGMSCORES; d++) {
		sum += scores[student][d];
	}
	return (sum/PGMSCORES);
}	// calculates average score of each program

float pMedian (int prog) {
	int student, program[NUMBERofSTUDENTS];

	for(student = 0; student < NUMBERofSTUDENTS; student++) {
		program[student] = scores[student][prog];
	}

	sort(program, NUMBERofSTUDENTS);

	if(NUMBERofSTUDENTS % 2 == 0)
		return (program[NUMBERofSTUDENTS/2] + program[NUMBERofSTUDENTS/2-1]) / 2;
	else
		return program[NUMBERofSTUDENTS/2];
}	// calculates median score of each program

void printRRow(int row) {
	int e;
	printf("Student %-2d |", row+1);
	for (e = 0; e < PGMSCORES; e++) {
		printf("%6d  |", scores[row][e]);
	}
	printf("%7.1f \n", sAverage(row));
}

void printHeader() {
	printf("CSCE 1030.001 Program 4 - Ahmad Rashed - arashed31@gmail.com - CSP03 \n\n");
}	// print the header

void printResults() {
	int s, t, u, v;		// just counters
	printf("Program RESULTS: \n\n");
	printf("Student    |");
	for(s = 0; s < PGMSCORES; s++) {
		printf("  PGM %d |", s+1);
	}
	printf(" Std Avg \n");

	printf("------------");
	for(t = 0; t < PGMSCORES; t++)
		printf("---------");
	printf("--------\n");

	for(s = 0; s < NUMBERofSTUDENTS; s++) {
		printRRow(s);
	}
	
	printf("------------");
	for(t = 0; t < PGMSCORES; t++)
		printf("---------");
	printf("--------");
	
	printf("\nPGM Avg    |");
	for (u = 0; u < PGMSCORES; u++) {
		printf("%6.1f  |", pAverage(u));
	}
	printf("\nPGM Median |");
	for (v = 0; v < PGMSCORES; v++) {
		printf("%6.1f  |", pMedian(v));
	}
}	// prints entire RESULTS table


void letterGrades() {
	int l, m;
	printf("Program GRADE DISTRIBUTION: \n\n");
	printf("Program | As | Bs | Cs | Ds | Fs\n");
	printf("--------------------------------\n");
	for (m = 0; m < PGMSCORES; m++) {
		printf("PGM %d   |", m+1);
		int grades[] = {0, 0, 0, 0, 0};
		for(l = 0; l < NUMBERofSTUDENTS; l++) {
			if(scores[l][m] > 89)
				grades[0]++;	// A
			else if (scores[l][m] > 79)
				grades[1]++;	// B
			else if (scores[l][m] > 69)
				grades[2]++;	// C
			else if (scores[l][m] > 59)
				grades[3]++;	// D
			else
				grades[4]++;	// F
		}
		printf("  %d |  %d |  %d |  %d |  %d \n", grades[0], grades[1], grades[2], grades[3], grades[4]);
	}
}

int main() {
	inScan();
	printf("\n");
	printHeader();
	printResults();
	printf("\n\n\n");
	letterGrades();
	return 0;
} // Java FTW.
