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
	int num1, num2, len;

	num1 = 0;

	while (s[num1] != '\0')
	{
		num1++;
	}

	len = num1;

	for (num2 = len - 1; num2 >= 0; num2--)
	{
		_putchar(s[num2]);
	}

	_putchar('\n');
}
