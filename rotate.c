/*
Course: CSCE 3600 - Systems Programming
Assignment: Major Assignment 1
File: rotate.c
Description: Does right rotation on the 32-bit unsigned integer
	     by a certain number of bit positions.
*/

#include "major1.h"

uint32_t rotate_right(uint32_t num, uint32_t positions) {
//number won't change if position is 0.
	if (positions == 0){
	return num;
	}
//Shifts the bits to right
	uint32_t right_part = num >> positions;
//take the lost bits to the left side
	uint32_t left_part = num << (32 - positions);
//combine both left and right parts
	uint32_t result = right_part | left_part;
return result;
}
