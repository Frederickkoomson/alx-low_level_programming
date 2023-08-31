#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 *
 * Return: None.
 */
void print_binary(unsigned long int n)
{
	int leading_zeroes = 1;
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (mask > 0)
	{
		if (n & mask)
			leading_zeroes = 0;

		if (!leading_zeroes || (mask == 1))
			putchar((n & mask) ? '1' : '0');

		mask >>= 1;
	}
}
