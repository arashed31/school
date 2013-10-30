/*
	Ahmad Rashed
	CSCE1030.307
	Lab 3
	- - - - - - - - - - - - - - - - - - - - -
	Description: Outputs the data entered by the user.
*/

#include <stdio.h>

int main () {
	int num1; float num2; double num3; char letter;

	printf("Enter all your inputs on a single line separated by space in order of integer, float, double, character;\n\n");
	
	scanf("%d %f %lf %c", &num1, &num2, &num3, &letter);

	printf	("\nInput for integer is %d. \n", num1);
	printf	("Input for float is %f. \n", num2);
	printf	("Input for double is %lf. \n", num3);
	printf	("Input for char is \'%c\'. \n", letter);

	return 0;
}
