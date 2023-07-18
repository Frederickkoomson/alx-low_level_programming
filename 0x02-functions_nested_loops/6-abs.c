/*
 * File: This is the file 0-positive_or_negative.c
 * Author: Frederick B. Koomson
 */

#include "main.h"

/**
 * _abs  - This is where the program is going to be doing
 * @digits: this refers to the value
 * Return: This section will always be 0 succes
 */
int _abs(int digits)
{
	if (digits < 0)
		digits = digits * -1;
	return (digits);
}
