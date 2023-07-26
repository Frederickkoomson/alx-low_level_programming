/*
 * File: 0-reset_to_98.c
 * Auth: Frederick Koomson
 */

#include "main.h"
/**
 * reverse_array - This is the funxction that will go
 *
 * @a: This is the first number
 * @n: This is the second number.
 */
void reverse_array(int *a, int n)
{
	int count;
	int num;

	n--;
	for (num = 0;  num < n ; num++)
	{
		count = a[num];
		a[num] = a[n];
		a[n] = count;
		n--;
	}
}

