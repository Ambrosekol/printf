#include "main.h"
/**
 * putint - prints the integer and returns length
 * @list: accept the list of type va_list
 * Return: the length of the integer
 */
int putint(va_list list)
{
	int num, len, i, j;
	char buffer[10] = {0};

	num = va_arg(list, int);
	len = 0;
	i = 0;
	j = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	if (num < 0)
	{
		_putchar('-');
		num = -num;
		len++;
	}
	while (num != 0)
	{
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	}
	len += 1;
	for (j = i - 1; j >= 0; j--)
		_putchar(buffer[j]);
	return (len);
}
