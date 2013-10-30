#include <stdio.h>
#include "stdlib.h"

typedef struct sNode{
   int data;
   struct sNode *next;
}stackNode;

typedef struct stackHeader{
    stackNode *head;
} stack;


void initStack(stack *);

void push(stack *, int );

stackNode* pop(stack *);

