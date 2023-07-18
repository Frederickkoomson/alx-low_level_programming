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
	int digit;
	unsigned long num1, num2, num3;
	unsigned long alpha1, alpha2, alpha3, add;

	digit = 0;
	num1 = 0;
	num2 = 1;
	for (digit = 1; digit <= 91; digit++)
	{
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
		printf("%lu, ", num3);
	}
	alpha1 = num1 % 1000;
	num1 = num1 / 1000;
	alpha2 = num2 % 1000;
	num2 = num2 / 1000;
	while (add <= 98)
	{
		add = (alpha1 + alpha2) / 1000;
		alpha3 = (alpha1 + alpha2) - add * 1000;
		num3 = (num1 + num2) + add;
		alpha1 = alpha2;
		alpha2 = alpha3;
		num1 = num2;
		num2 = num3;
		if (alpha3 >= 100)
			printf("%lu%lu", num3, alpha3);
		else
			printf("%lu0%lu", num3, alpha3);
		if (digit != 98)
			printf(", ");
		digit++;
	}
	putchar('\n');
	return (0);
}
