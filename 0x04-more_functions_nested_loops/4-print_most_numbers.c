#include "main.h"
/*
 * File: This is the file _isdigit.c
 * Author: Frederick B. Koomson
 */

/**
 *print_most_numbers - This is a function to check the upper case character
 * Return: 1 if the uppercase c else return 0.
 *
 */
void print_most_numbers(void)
{
	int numbers;

	for (numbers = 0; numbers <= 9; numbers++)
	{
		if (numbers != 2 && numbers != 4)
			_putchar((numbers % 10) + '0');
	}

	_putchar('\n');
}
