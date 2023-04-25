#include "main.h"
/**
 * putbin - prints the binary representation of an unsigned integer
 * @list: argument list containing the unsinged int to convert
 * Return: number of characters printed
 */
int putbin(va_list list)
{
	unsigned int num;
	int count, i, star_zero;
	char *num_str;

	num = va_arg(list, unsigned int);
	num_str = malloc(sizeof(char) * 33);
	count = 0;
	
	if (num_str == NULL)
		return (-1);
	for (i = 31; i >= 0; i--)
	{
		if (num & (1 << i))
			num_str[31 - i] = '1';
		else
			num_str[31 - i] = '0';
	}
	num_str[32] = '\0';
	star_zero = 1;
	for (i = 0; i < 32; i++)
	{
		if (num_str[i] == '1')
			star_zero = 0;
		if(!star_zero)
		{
			_putchar(num_str[i]);
			count++;
		}
	}
	free(num_str);
	return (count);
}
