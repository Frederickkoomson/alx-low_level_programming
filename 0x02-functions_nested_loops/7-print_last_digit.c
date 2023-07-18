/*
 * File: This is the file 0-positive_or_negative.c
 * Author: Frederick B. Koomson
 */

#include "main.h"

/**
 *print_last_digit - This is where the program is going to be doing
 * @num: we print the last digits of a number
 * Return: This section will always be 0 succes
 */

int print_last_digit(int num)
{
	int last;

	if (num < 0)
		num = -num;

	last = num % 10;

	if (last < 0)
		last = -last;

	_putchar(last + '0');

	return (last);
}
