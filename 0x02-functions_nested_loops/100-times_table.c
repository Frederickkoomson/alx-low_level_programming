/*
 * File: This is the file 0-positive_or_negative.c
 * Author: Frederick B. Koomson
 */

#include "main.h"

/**
 *print_times_table - This is where the program is going to be doing
 *@num: New numbers to be added
 *Return: This section will always be 0 succes
 */
void print_times_table(int num)
{
	int num1, num2, num3;

	if (num >= 0 && num <= 15)
	{
		for (num1 = 0; num1 <= num; num1++)
		{
			_putchar(48);
			for (num2 = 1; num2 <= num; num2++)
			{
				num3 = num1 * num2;
				_putchar(44);
				_putchar(32);
				if (num3 <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(num3 + 48);
				}
				else if (num3 <= 99)
				{
					_putchar(32);
					_putchar((num3 / 10) + 48);
					_putchar((num3 % 10) + 48);
				}
				else
				{
					_putchar(((num3 / 100) % 10) + 48);
					_putchar(((num3 / 10) % 10) + 48);
					_putchar((num3 % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
