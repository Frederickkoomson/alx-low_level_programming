/*
 * File: This is the file 0-positive_or_negative.c
 * Author: Frederick B. Koomson
 */

#include "main.h"

/**
 *jack_bauer - This is where the program is going to be doing
 * Return: This section will always be 0 succes
 */
void jack_bauer(void)
{
	int num1, num2, num3, num4;

	for (num1 = 48; num1 <= 50; num1++)
	{
		for (num2 = 48; num2 <= 57; num2++)
		{
			for (num3 = 48; num3 <= 53; num3++)
			{
				for (num4 = 48; num4 <= 57; num4++)
				{
					if (num1 >= 50 && num2 >= 52)
						break;
					_putchar(num1);
					_putchar(num2);
					_putchar(58);
					_putchar(num3);
					_putchar(num4);
					_putchar('\n');
				}
			}
		}
	}
}
