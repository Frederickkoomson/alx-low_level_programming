/*
 * File: This is the file 0-positive_or_negative.c
 * Author: Frederick B. Koomson
 */

#include <stdio.h>

/**
 * print_to_98- This is where the program is going to be doing
 * @num: This will print the work
 * Return: This section will always be 0 succes
 */
void print_to_98(int num)
{
	if (num < 98)
	{
		for (num = num; num < 98; num++)
			printf("%d, ", num);
		printf("%d\n", 98);
	}
	else
	{
		for (num = num; num > 98; num--)
			printf("%d, ", num);
		printf("%d\n", 98);
	}
}
