/*
  Course: CSCE 3600 - Systems Programming
  Assignment: Major Assignment 1
  File: major1.h
  Description: Shared header file defining function prototypes and standard
               library includes for rotate and parity operations.
 */

#ifndef MAJOR1_H
#define MAJOR1_H

#include <stdio.h>
#include <stdint.h>

//Function prototypes 
uint32_t rotate_right(uint32_t num, uint32_t positions);
int compute_parity(uint32_t num);
int count_leading_zeroes(uint32_t num);

#endif 
