#include "main.h"
/*
 * File: This is the file _isdigit.c
 * Author: Frederick B. Koomson
 */

/**
 *print_triangle - This is a function to check the upper case character
 * @size: This refers to the number of size
 *
 * Return: 1 if the uppercase c else return 0.
 *
 */
void print_triangle(int size)
{
	int tri, new;

	if (size > 0)
	{
		for (tri = 1; tri <= size; tri++)
		{
			for (new = size - tri; new > 0; new--)
				_putchar(' ');

			for (new = 0; new < tri; new++)
				_putchar('#');

			if (tri == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
