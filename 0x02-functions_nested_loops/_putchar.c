#include <unistd.h>

/**
 * _putchar - This will output the function 
 * @c: This is our next output
 *
 * Return: This is our next success to bring out 1
 * Errors result in a return of -1 and the corresponding setting of errno.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
