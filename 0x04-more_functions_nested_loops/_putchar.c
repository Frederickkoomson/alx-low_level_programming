#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: This will retunr 1 when it sucess.
 * On error, This is will return -1 when it is done
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
