
/*
 * Course: CSCE 3600 - Systems Programming
 * Assignment: Major Assignment 1
 * File: clz.c
 * Description: Counts the number of leading zero bits
 * in a 32-bit unsigned integer.
 */

#include "major1.h"

int count_leading_zeroes(uint32_t num)
{
    int count = 0;

    for (int bit = 31; bit >= 0; bit--)
    {
        if ((num >> bit) & 1U)
        {
            break;
        }

        count++;
    }

    return count;
}
