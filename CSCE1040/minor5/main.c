/*
	Ahmad Rashed
	ahmadrashed@my.unt.edu
	CSCE 1040 - Minor 5
	CSP 04
*/

#include "stack.h"

int main()
{
	stack s;
	int num, a, b;
	char buffer[32];
	initStack(&s);

	while(scanf("%s", buffer) != EOF) {
		printf("%s \n", buffer);
		switch (buffer[0]) {
			case '+':
				b = pop(&s)->data;
				a = pop(&s)->data;
				push(&s, a + b);
				break;
			case '-':
				b = pop(&s)->data;
				a = pop(&s)->data;
				push(&s, a - b);
				break;
			case '*':
				b = pop(&s)->data;
				a = pop(&s)->data;
				push(&s, a * b);
				break;
			case '/':
				b = pop(&s)->data;
				a = pop(&s)->data;
				push(&s, a / b);
				break;
			case '%':
				b = pop(&s)->data;
				a = pop(&s)->data;
				push(&s, a % b);
				break;
			case 'p':
				printf("%d \n", pop(&s)->data);
				break;
			default:
				num = atoi (buffer);
				push(&s, num);
				break;
		}
	}

	return 0;
}

