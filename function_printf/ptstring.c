#include "main.h"

/**
 * ptstring - prints string
 *
 * @z: varuable
 *
 * Return: 0
 */
int ptstring(char *s)
{
	int i;
	int r = 0;

	if (s)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			ptchar(s[i]);
			r += 1;
		}
	}
	return (r);
}
