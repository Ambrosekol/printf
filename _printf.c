#include "main.h"
/**
  * _printf - a printf function with limited func
  * @format: List of string
  * @...: var
  * Return: int (sum of items)
  */
int _printf(const char *format, ...)
{
	check_match chk[] = {
		{"%s", putstrng}, {"%%", putper}, {"%c", print_char}
	};
	va_list args;
	int i, _index, sizeof_chkr, len;

	va_start(args, format);
	sizeof_chkr = sizeof(chk) / sizeof(chk[0]);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	for (i = 0; (format[i] != '\0'); i++)
	{
		for (_index = 0; _index < sizeof_chkr; _index++)
		{
			if (chk[_index].id[0] == format[i] && chk[_index].id[1] == format[1 + i])
			{
				len += chk[_index].func(args);
				i = i + 2;
			}
		}
		_putchar(format[i]);
		len++;
	}
	va_end(args);
	return (len);
}