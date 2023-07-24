/*
 * File: This is the file 0-positive_or_negative.c
 * Author: Frederick B. Koomson
 */

#include "main.h"
#include <stdio.h>

/**
 * print_array - This is where the program is going to be doing
 * @a: character to test
 * @n: Thisisthe second test
 * Return: This section will always be 0 succes
 */
void print_array(int *a, int n)
{
	int num;

	for (num = 0; num < n; num++)
	{
		if (num == 0)
			printf("%d", a[num]);
		else
			printf(", %d", a[num]);
	}
		printf("\n");
}
