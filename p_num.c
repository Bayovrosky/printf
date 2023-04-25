#include "main.h"

/**
 * p_num - prints number in putchar
 * @num: integer to be printed
 * Return: integer
 */

int p_num(int num)
{
	int n;
	int r_t = 0;

	if (num == 0)
		return (0);
	
	n = num / 10;
	p_num(n);
	ptchar(num % 10 + '0');
	r_t += 1;

	return (r_t);
}
