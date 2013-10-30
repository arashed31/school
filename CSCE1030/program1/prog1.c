/*
	Ahmad Rashed
	arashed31@gmail.com
	CSCE 1030.001 CSP03
	This program determins the number of paint cans required to paint a room including the ceiling.
 */
#include <stdio.h>

int main(){
	float r_length, r_width, r_height, num_win, num_door, num_sky;

	printf("CSCE 1030 - Program One - Ahmad Rashed - arashed31@gmail.com - CSP03 \n\n");
	printf("Enter room length: "); scanf("%f", &r_length);
	printf("Enter room width: "); scanf("%f", &r_width);
	printf("Enter room height: "); scanf("%f", &r_height);
	printf("Enter number of windows: "); scanf("%f", &num_win);
	printf("Enter number of doors: "); scanf("%f", &num_door);
	printf("Enter number of slylights: "); scanf("%f", &num_sky);
	
	double room_s_area = (r_length*r_height*2) + (r_width*r_height*2) + (r_length*r_width);
	double other_area = (num_win * 12) + (num_door * 20) + (num_sky * 24);
	double gallons = (room_s_area - other_area)/220;
	
	if(gallons > 0)
		printf("\nThe number of gallons needed would be %d. \n", (int)(gallons+0.99999));
	else
		printf("\nYou have no walls to paint. \n");
}
