/**
 * File: 0-reset_to_98.c
 * Auth: Frederick Koomson
*/

#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - fuction that allocates memory and also checks if sucessful
 * @b: size of memory to allocate.
 *
 * Return: pointer to memory, Else if return exit status 98.
 */
void *malloc_checked(unsigned int b)
{
	void *num;

	num = malloc(b);
	if (num == NULL)
	{
		free(num);
		exit(98);
	}
	return (num);
}
