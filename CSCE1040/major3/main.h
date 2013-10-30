#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

typedef enum {firstYear, sophomore, junior, senior, grad} Year;

typedef struct _DBRecord {
	char *fName;
	char *lName;
	char idNum[8];
	float GPA;
	int index;
	int age;
	int gradyear;
	Year Class;
}DBRecord;

