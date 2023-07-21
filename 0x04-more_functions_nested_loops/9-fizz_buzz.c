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
	int numbers;

	for (numbers = 1; numbers <= 100; numbers++)
	{
		if ((numbers % 3) == 0 && (numbers % 5) == 0)
			printf("FizzBuzz");

		else if ((numbers % 3) == 0)
			printf("Fizz");

		else if ((numbers % 5) == 0)
			printf("Buzz");

		else
			printf("%d", numbers);

		if (numbers == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
