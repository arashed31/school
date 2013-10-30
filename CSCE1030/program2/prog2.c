/*
	Ahmad Rashed
	arashed31@gmail.com
	CSCE 1030.001 CSP03
	This program knows your daily schedule and tells you what to do.
 */
#include <stdio.h>

int main(){
	char input, dummy;
	int i = 0, j = 0, hour = 0, weekends = 0, weekdays = 0, inv_d = 0, inv_h = 0, work = 0, asleep = 0, off = 0; // I'd rather use an array... I like array(list)s...

	printf("CSCE 1030 - Program Two - Ahmad Rashed - arashed31@gmail.com - CSP03 \n\n");

	for(i = 0; i < 5; i++) {
		printf("Enter day of the Week (S M T W R F A): "); scanf("%c%c", &input, &dummy);

		if(input == 'S' || input == 'A') {								// decodes input
			printf("It's the weekend! \n\n"); weekends++;							// PARTY HARD!
		}
		else {
			if(input == 'M' || input == 'T'|| input == 'W'|| input == 'R' || input == 'F') {
				weekdays++;
				do {
					printf("Enter hour of the day (0 - 23): "); scanf("%d%c", &hour, &dummy); j = 0;

					if(hour >= 0 && hour < 8) {
						printf("You should be asleep. \n\n"); asleep++; }
					else if(hour >= 8 && hour < 17) {
						printf("You should be at work. \n\n"); work++; }
					else if(hour >= 24 || hour < 0) {
						printf("Invalid time, try again. \n\n"); inv_h++; j = 1; }		// loop problems here
					else {
						printf("You should be off work. \n\n"); off++; }
				}while(j != 0);
			}
			else {
				printf("You entered an invalid day. \n\n"); inv_d++;	// I would have included "i--;", however, you said, "It should process exactly 5 days, whether the user enters valid days or not."
			}
		}
	}

	printf("\nSummary of Totals! \n");
	printf("%d Weekends \n", weekends);
	printf("%d Weekdays \n", weekdays);
	printf("%d Invalid Days \n", inv_d);
	printf("%d At Work \n", work);
	printf("%d Still Asleep \n", asleep);
	printf("%d Off Work \n", off);
	printf("%d Invalid Hours \n", inv_h);
	
	return 0; 
}
