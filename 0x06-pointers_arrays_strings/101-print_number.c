/*
 * File: 0-reset_to_98.c
 * Auth: Frederick Koomson
 */

#include "main.h"
/**
 * print_number - This is the function
 * @n: this will be our number.
 *
 */
void print_number(int n)
{
	unsigned int count;

	if (n < 10 && n >= 0)
	{
		_putchar('0' + n);
		return;
	}
	if (n < 0)
	{
		count = -n;
		_putchar('-');
	}
	else
	{
		count = n;
	}

	if (count >= 10)
	{
		print_number(count / 10);
	}
	_putchar('0' + (count % 10));
}

