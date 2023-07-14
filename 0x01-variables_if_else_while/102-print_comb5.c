/*
 * File: This is the file 0-positive_or_negative.c
 * Author: Frederick B. Koomson
 */

#include<stdio.h>
/**
 * main - This is where the program is going to be doing
 * Return: This section will always be 0 succes
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 <= 98; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 <= 99; digit2++)
		{
			putchar((digit1 / 10) + '0');
			putchar((digit1 % 10) + '0');
			putchar(' ');
			putchar((digit2 / 10) + '0');
			putchar((digit2 % 10) + '0');

			if (digit1 == 98 && digit2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
