#include "main.h"
/**
 * putni - prints the integer and returns len
 * @list: accept the list of type va_list
 * @print_sign: on and off for sign
 * Return: returns the len of the integer
 */
int putni(va_list list, int print_sign)
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
	else if (num < 0)
	{
		if (print_sign)
		{
			_putchar('-');
			len++;
		}
		num = -num;
	}

	while (num != 0)
	{
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	}
	len += i;
	for (j = i - 1; j >= 0; j--)
		_putchar(buffer[j]);
	return (len);
}
