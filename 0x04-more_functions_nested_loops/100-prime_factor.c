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
	long pnumbers = 612852475143, division;

	while (division < (pnumbers / 2))
	{
		if ((pnumbers % 2) == 0)
		{
			pnumbers /= 2;
			continue;
		}

		for (division = 3; division < (pnumbers / 2); division += 2)
		{
			if ((pnumbers % division) == 0)
				pnumbers /= division;
		}
	}

	printf("%ld\n", pnumbers);

	return (0);
}
