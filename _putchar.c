#include <unistd.h>
/**
 * _putchar - this write character c to stdout
 * @c: This character be printed
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
