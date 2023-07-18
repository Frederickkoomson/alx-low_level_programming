/*
 * File: This is the file 0-positive_or_negative.c
 * Author: Frederick B. Koomson
 */

#include "main.h"

/**
 * print_alphabet_x10 - This is where the program is going to be doing
 * Return: This section will always be 0 succes
 */
void print_alphabet_x10(void)
{
	int numbers;
	char alphabets;

	for (numbers = 0; numbers < 10; ++numbers)
	{
		for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		{
			_putchar(alphabets);
		}
		_putchar('\n');
	}
}
