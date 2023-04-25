#include "main.h"
/**
 * putint - prints the integer and returns length
 * @list: accept the list of type va_list
 * Return: the length of the integer
 */
int putint(va_list list)
{
	int i, num, len, outlen;
	char *p;

	num = va_arg(list, int);
	len = num == 0 ? 1 : 0;
	if (num < 0)
	{
		len++;
		if (num == INT_MIN)
			p = "-2147483648";
		else
		{
			p = malloc(len + 1);
			if (p == NULL)
				return (0);
			sprintf(p, "%d", -num);
			p[0] = '-';
		}
	}
	else
	{
		p = malloc(len + 1);
		if (p == NULL)
			return (0);
		sprintf(p, "%d", num);
	}
	outlen = strlen(p);
	for (i = 0; i < outlen; i++)
		_putchar(p[i]);
	free(p);
	return (outlen);
}
