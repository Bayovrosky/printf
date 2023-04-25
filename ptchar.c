#include "main.h"

/**
 * ptchar - putchar function
 *
 * @n: variable
 *
 * Return: 0
 */

int ptchar(char n)
{
	return write(1, &n, 1);
}
