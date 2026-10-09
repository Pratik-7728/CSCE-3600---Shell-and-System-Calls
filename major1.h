/*
*Course: CSCE 3600 - System Programming
*Assignment: Major Assignment 1
*File: major1.h
*Description: A shared header file defining the function prototypes and 
*	      standard library includes for the project.
*/

#ifndef MAJOR1_H
#define MAJOR1_H
#include <stdio.h>
#include <stdint.h>

// Function prototypes for bitwise operations
uint32_t rotate_right(uint32_t num, uint32_t positions);
int compute_parity(uint32_t num);

#endif
