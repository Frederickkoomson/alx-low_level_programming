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
	int num1, num2;

	for (num1 = 1; num1 < 1024; num1++)
	{
		if ((num1 % 3) == 0 || (num1 % 5) == 0)
			num2 += num1;
	}
	printf("%d\n", num2);
	return (0);
}
