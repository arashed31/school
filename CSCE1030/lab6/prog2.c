/*
	Ahmad Rashed
	CSCE1030.307
	Lab 3
	- - - - - - - - - - - - - - - - - - - - -
	Description: Finds the ammount a customer should pay for their insurance based on their info.
*/

#include <stdio.h>

int main () {
	int ans, base = 40;

	printf("\nIn order to find the cost of insurance, please answer these questions. Type 1 for Yes and 0 for No. \n");
	
	printf("How old are you? "); scanf("%d", &ans);
	
	if(ans < 25) {
		base += 25;	}

	printf("Do you have a bad driving record? "); scanf("%d", &ans);

	if(ans == 1){
		base += 20;
	}

	printf("Have you ever had a DWI? "); scanf("%d", &ans);
	
	if(ans == 1){
		base += 55;
	}

	printf("Is your vehicle considered a sports car? "); scanf("%d", &ans);
	
	if(ans == 1){
		base += 35;
	}
	
	printf("\nYour total yearly insurance cost is $%d. This will be paid by $%d monthly. \n", base * 12, base);

	return 0;
}
