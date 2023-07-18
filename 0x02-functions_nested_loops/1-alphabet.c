/*
 * File: This is the file 1-alphabet.c
 * Author: Frederick B. Koomson
 */

#include "main.h"

/**
 * print_alphabet - This is the function we are going to use
 * Return: This section will 0 as output
 */

void print_alphabet(void)
{
	int lowercase;

	for (lowercase = 97; lowercase <= 122; lowercase++)
	{
		_putchar(lowercase);
	}
	_putchar('\n');
}
