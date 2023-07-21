#include "main.h"
/*
 * File: This is the file _isdigit.c
 * Author: Frederick B. Koomson
 */

/**
 *print_diagonal - This is a function to check the upper case character
 * @n: This refers to the integeer
 *
 *
 * Return: 1 if the uppercase c else return 0.
 */
void print_diagonal(int n)
{
	int length, diagonal;

	if (n > 0)
	{
		for (length = 0; length < n; length++)
		{
			for (diagonal = 0; diagonal < length; diagonal++)
				_putchar(' ');
			_putchar('\\');

			if (length == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
