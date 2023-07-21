#include "main.h"
/*
 * File: This is the file _isdigit.c
 * Author: Frederick B. Koomson
 */

/**
 *more_numbers - This is a function to check the upper case character
 * Return: 1 if the uppercase c else return 0.
 *
 */
void more_numbers(void)
{
	int numbers, compute;

	for (compute = 0; compute <= 9; compute++)
	{
		for (numbers = 0; numbers <= 14; numbers++)
		{
			if (numbers > 9)
				_putchar((numbers / 10) + '0');
			_putchar((numbers % 10) + '0');
		}
		_putchar('\n');
	}
}
