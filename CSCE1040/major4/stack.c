#include "header.h"

void initStack(stack *s)
{
    s->head = NULL;
}

void push(stack *s, Set set) {
    stackNode* sn;
    sn = (stackNode *) malloc(sizeof(stackNode));
	memcpy(sn->dset, set, 10 * sizeof(unsigned int));
    sn->next = s->head;
    s->head = sn;
}

stackNode* pop(stack *s) {
    stackNode* sn;
    sn = s->head;
    s->head = s->head->next;
    return sn;
}

