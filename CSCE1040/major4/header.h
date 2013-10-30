#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

// header.h

typedef unsigned int Set[10];

typedef enum {firstYear, sophomore, junior, senior, grad} Class;
typedef enum {LastName, FirstName, ID, Age, Year, GPA, GradYear} Field;
typedef enum {False, True} Boolean;

typedef struct records{
	int bitID;
	char *lName;
	char *fName;
	char idNum[9];
	int age;
	Class year;
	float gpa;
	int expectedGrad;
}DBRecord;

extern void bubbleSort(DBRecord *A[], int, Field);
extern Boolean compare(DBRecord *, DBRecord *, Field);
extern void swap(DBRecord *A[], int, int);

// stack.h

typedef struct sNode{
   Set dset;
   struct sNode *next;
}stackNode;

typedef struct stackHeader{
    stackNode *head;
} stack;


void initStack(stack *);

void push(stack *, Set );

stackNode* pop(stack *);

// set.h

extern void setUnion(Set , Set , Set );
extern void setIntersection(Set , Set , Set );
extern void clearSet(Set );
extern void add2Set(Set , int );
extern int isMember(Set , int );
extern void printSet(Set );

