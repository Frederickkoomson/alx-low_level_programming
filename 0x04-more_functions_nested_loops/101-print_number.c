#include "main.h"
/*
 * File: This is the file _isdigit.c
 * Author: Frederick B. Koomson
 */

/**
 *print_number - This is a function to check the upper case character
 * Return: 1 if the uppercase c else return 0.
 *
 * @n: This represents the number
 */
void print_number(int n)
{
	unsigned int numbers = n;

	if (n < 0)
	{
		_putchar('-');
		numbers = -numbers;
	}

	if ((numbers / 10) > 0)
		print_number(numbers / 10);

	_putchar((numbers % 10) + '0');
}
