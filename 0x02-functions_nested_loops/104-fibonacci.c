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
	int digit, change, change2;
	long int num1, num2, fibo, fibo2, num3, num4;

	num1 = 1;
	num2 = 2;
	change =  change2 = 1;
	printf("%ld, %ld", num1, num2);
	for (digit = 0; digit < 96; digit++)
	{
		if (change)
		{
			fibo = num1 + num2;
			printf(", %ld", fibo);
			num1 = num2;
			num2 = fibo;
		}
		else
		{
			if (change2)
			{
				num3 = num1 % 1000000000;
				num4 = num2 % 1000000000;
				num1 = num1 / 1000000000;
				num2 = num2 / 1000000000;
				change2 = 0;
			}
			fibo2 = (num3 + num4);
			fibo = num1 + num2 + (fibo2 / 1000000000);
			printf(", %ld", fibo);
			printf("%ld", fibo2 % 1000000000);
			num1 = num2;
			num3 = num4;
			num2 = fibo;
			num4 = (fibo2 % 1000000000);
		}
		if (((num1 + num2) < 0) && change == 1)
			change = 0;
	}
	printf("\n");
	return (0);
}
