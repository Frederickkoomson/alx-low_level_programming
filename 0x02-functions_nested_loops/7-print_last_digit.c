/*
 * File: This is the file 0-positive_or_negative.c
 * Author: Frederick B. Koomson
 */

#include "main.h"

/**
 *print_last_digit - This is where the program is going to be doing
 * @last: we print the last digits of a number
 * Return: This section will always be 0 succes
 */

int print_last_digit(int last)
{
	if (last < 0)
		last = last * -1;
	_putchar((last % 10) + '0');
	return (last % 10);
}
