/*
Course: CSCE 3600 - System Programming
Assignment: Major Assignment 1
File: parity.c
Description: Computes the parity of a 32-bit unsigned integer using 
             bitwise operations.
	     It will return 0 for even parity and 1 for odd parity.
*/

#include "major1.h"

int compute_parity(uint32_t num) {
	int count = 0;
//Checks each of the 32 bit 1 by 1.
	for (int i = 0; i < 32; i++) {
//increases the counter is least significant bit is 1.
	if ((num & 1) == 1){
		count++;
	}
//To shift right by 1 bit.
	num = num >> 1;
	}
return (count & 1);
}
