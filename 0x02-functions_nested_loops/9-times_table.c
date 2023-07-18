/*
 * File: This is the file 0-positive_or_negative.c
 * Author: Frederick B. Koomson
 */

#include "main.h"

/**
 *times_table - This is where the program is going to be doing
 * Return: This section will always be 0 succes
 */
void times_table(void)
{
	int alpha1, alpha2, alpha3;

	for (alpha1 = 0; alpha1 <= 9; alpha1++)
	{
		_putchar(48);
		for (alpha2 = 1; alpha2 <= 9; alpha2++)
		{
			alpha3 = alpha1 * alpha2;
			_putchar(44);
			_putchar(32);
			if (alpha3 <= 9)
			{
				_putchar(32);
				_putchar(alpha3 + 48);
			}
			else
			{
				_putchar((alpha3 / 10) + 48);
				_putchar((alpha3 % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
