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
	unsigned long digit, num1, num2, num3, add;

	num1 = add = 0;
	num2 = 1;
	for (digit = 0; digit < 50; digit++)
	{
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
		if (num3 % 2 == 0 && num3 < 4000000)
		{
			add += num3;
		}
	}
	printf("%lu\n", add);
	return (0);
}
