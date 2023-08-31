#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if there is one or more chars in the
 *         string b that is not 0 or 1, or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	size_t length = 0;
	size_t i = 0;

	if (b == NULL)
		return (0);

	length = strlen(b);

	for (i = 0; i < length; i++)
	{
		if (b[i] == '0')
		{
			result <<= 1;
		}
		else if (b[i] == '1')
		{
			result <<= 1;
			result |= 1;
		}
		else
		{
			return (0);
		}
	}

	return (result);
}
