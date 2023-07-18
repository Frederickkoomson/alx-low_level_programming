/*
 * File: This is the file 0-positive_or_negative.c
 * Author: Frederick B. Koomson
 */

#include "main.h"

/**
 * print_sign - This is where the program is going to be doing
 * @num: this is to check int
 * Return: This section will always be 0 succes
 */
int print_sign(int num)
{
	if (num > 0)
	{
		_putchar('+');
		return (1);
	} else if (num == 0)
	{
		_putchar(48);
		return (0);
	} else if (num < 0)
	{
		_putchar('-');
	}
		return (-1);
}
