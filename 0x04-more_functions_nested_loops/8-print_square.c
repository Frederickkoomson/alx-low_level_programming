#include "main.h"
/*
 * File: This is the file _isdigit.c
 * Author: Frederick B. Koomson
 */

/**
 *print_square - This is a function to check the upper case character
 * @size: This refers to the number of size
 *
 * Return: 1 if the uppercase c else return 0.
 *
 */
void print_square(int size)
{
	int heigth, square;

	if (size > 0)
	{
		for (heigth = 0; heigth < size; heigth++)
		{
			for (square = 0; square < size; square++)
				_putchar('#');

			if (heigth == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
