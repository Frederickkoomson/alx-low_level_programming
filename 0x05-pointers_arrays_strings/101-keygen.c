/*
 * File: 101-keygen.c
 * Auth: Frederick B. Koomson
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the
 *        program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	char passwd[84];
	int start = 0, add = 0, first_side1, second_side2;

	srand(time(0));

	while (add < 2772)
	{
		passwd[start] = 33 + rand() % 94;
		add += passwd[start++];
	}

	passwd[start] = '\0';

	if (add != 2772)
	{
		first_side1 = (add - 2772) / 2;
		second_side2 = (add - 2772) / 2;
		if ((add - 2772) % 2 != 0)
			first_side1++;

		for (start = 0; passwd[start]; start++)
		{
			if (passwd[start] >= (33 + first_side1))
			{
				passwd[start] -= first_side1;
				break;
			}
		}
		for (start = 0; passwd[start]; start++)
		{
			if (passwd[start] >= (33 + second_side2))
			{
				passwd[start] -= second_side2;
				break;
			}
		}
	}

	printf("%s", passwd);

	return (0);
}
