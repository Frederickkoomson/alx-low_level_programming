/*
 * File: This is the file 0-positive_or_negative.c
 * Author: Frederick B. Koomson
 */

#include "main.h"

/**
 * puts_half - This is where the program is going to be doing
 * @str: character to test
 * Return: This section will always be 0 succes
 */
void puts_half(char *str)
{
	int len, num1, num2;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (num2 = len / 2; str[num2] != '\0'; num2++)
		{
			_putchar(str[num2]);
		}
	} else if (len % 2)
	{
		for (num1 = (len - 1) / 2; num1 < len - 1; num1++)
		{
			_putchar(str[num1 + 1]);
		}
	}
	_putchar('\n');
}
