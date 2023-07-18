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
	int alpha;
	long int num1, num2, fibo;

	num1 = 1;
	num2 = 2;
	printf("%ld, %ld", num1, num2);
	for (alpha = 0; alpha < 48; alpha++)
	{
		fibo = num1 + num2;
		printf(", %ld", fibo);
		num1 = num2;
		num2 = fibo;
	}
	printf("\n");
	return (0);
}
