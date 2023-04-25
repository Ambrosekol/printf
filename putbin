#include "main.h"
/**
 * putbin - prints the binary representation of an unsigned integer
 * @list: argument list containing the unsinged int to convert
 * Return: number of characters printed
 */
int putbin(va_list list)
{
	unsigned int num, mask;
	int len, bits, i;
	char *num_str;

	num = va_arg(list, unsigned int);
	if (num == 0)
	{
		_putchar('0');
		len = 1;
	}
	else
	{
		bits = 0;
		mask = ~0;
		while ((mask & num) != 0)
		{
			bits++;
			mask <<= 1;
		}
		num_str = malloc(bits + 1);
		if (num_str == NULL)
			return (0);
		for (i = bits - 1; i >= 0; i--)
		{
			num_str[i] = (num & 1) + '0';
			num >>= 1;
		}
		num_str[bits] = '\0';
		_puts(num_str);
		free(num_str);
	}
	return (len);
}
