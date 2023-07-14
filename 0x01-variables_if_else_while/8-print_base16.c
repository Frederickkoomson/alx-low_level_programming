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
	int digits;
	char alpha;

	for (digits = 0; digits < 10; digits++)
		putchar((digits % 10) + '0');

	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);

	putchar('\n');

	return (0);
}
