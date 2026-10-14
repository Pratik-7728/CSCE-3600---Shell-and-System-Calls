/*
  Course: CSCE 3600 - Systems Programming
  Assignment: Major Assignment 1
  File: major1.c
  Description: This is the main program file. It will validate users input,
	       display the menu and executes the bitwise functions.
 */

#include "major1.h"

int main(void) {
	int choice = 0;

	while (1) {
	// To display the menue
	printf("Enter the option for the operation to be performed:\n");
	printf("(1) Count leading to Zeroes\n");
	printf("(2) Rotate right\n");
	printf("(3) Exit\n");
	printf("--> ");

	if (scanf("%d", &choice) != 1) {
	while (getchar()!= '\n');
	printf("Error: Invalid Option. Please try again.\n");
	continue;
	}

	//To exit the program
	if (choice == 3) {
		printf("Program terminating. Goodbye.\n");
	break;
	}
	
	// To validate the menu range
	if (choice < 1 || choice > 3){
		printf("Error: Invalid option. Please try again.\n");
	continue;
	}

	// To read the 32-bit operand
	unsigned long long temp_val = 0;
	while (1) {
		printf("Enter a 32-bit number (>=1 and <= 4294967295): ");
		if (scanf("%llu", &temp_val) == 1){
			if (temp_val >= 1ULL && temp_val <= 4294967295ULL) {
				break;
			}
		} else {
			while (getchar() != '\n');
		}
	}
	uint32_t operand = (uint32_t)temp_val;

	//o execute the selected operation
	if (choice == 1) {
		int result = count_leading_zeroes(operand);
		printf("The number of leading zeroes in %u is %d\n", operand, result);
	} else if (choice == 2) {
		long long temp_pos = -1;
		while (1) {
			printf("Enter the number of positions to rotate right (between 0 and 31): ");
			if (scanf("%lld", &temp_pos) == 1) {
				if (temp_pos >= 0 && temp_pos <= 31) {
					break;
				}
			} else {
				while (getchar() != '\n');
			}
		}
		uint32_t positions = (uint32_t)temp_pos;
		uint32_t result = rotate_right(operand, positions);
		printf("%u roated by %u position gives: %u\n", operand, positions, result);
	}
}

return 0;	
}
