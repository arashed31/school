#include "stack.h"


void initStack(stack *s)
{
    s->head = NULL;
}

void push(stack *s, int i)
{
    stackNode *sn;
    sn = (stackNode *) malloc(sizeof(stackNode));
    sn->data = i;
    sn->next = s->head;
    s->head = sn;
}

stackNode* pop(stack *s)
{
    stackNode *sn;
    sn = s->head;
    s->head = s->head->next;
    return sn;
}

