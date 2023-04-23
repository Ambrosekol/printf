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
	len = 0;
	/* boundary 1: check if format is NULL */
	if (format == NULL)
	{
		return (-1);
	}
	for (i = 0; (format[i] != '\0'); i++)
	{
		/* Boundary 2: check for incomplete format specifier*/
		if (format[i] == '%' && format[i + 1] == '\0')
		{
			return (-1);
		}
		/*Process the format specifier */
		if (format[i] == '%')
		{

			for (_index = 0; _index < sizeof_chkr; _index++)
			{
				if (format[i + 1] == *(chk[_index].id + 1))
				{
					len += chk[_index].func(args);
					i += 1;
					break;
				}
			}
			/* boundary 3: check for unsurported format*/
			if (_index == sizeof_chkr)
			{
				_putchar(format[i]);
				len++;
			}
		}
		else
		{
			_putchar(format[i]);
			len++;
		}
	}
	va_end(args);
	return (len);
}
