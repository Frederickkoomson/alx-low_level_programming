/*
 * File: This is the file 0-positive_or_negative.c
 * Author: Frederick B. Koomson
 */

#include "main.h"

/**
 * puts2 - This is where the program is going to be doing
 * @str: character to test
 * Return: This section will always be 0 succes
 */
void puts2(char *str)
{
	int len1, num;

	len1 = 0;

	while (str[len1] != '\0')
	{
		len1++;
	}

	for (num = 0; num < len1; num += 2)
	{
		_putchar(str[num]);
	}

	_putchar('\n');
}
