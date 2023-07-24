/*
 * File: This is the file 0-positive_or_negative.c
 * Author: Frederick B. Koomson
 */

#include "main.h"

/**
 * print_rev - This is where the program is going to be doing
 * @s: character to test
 * Return: This section will always be 0 succes
 */
void print_rev(char *s)
{
	int num = 0, rev;

	while (s[rev++])
		num++;

	for (rev = num - 1; rev >= 0; rev--)
		_putchar(s[rev]);

	_putchar('\n');
}
