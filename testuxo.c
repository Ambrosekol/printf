#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len, len2;

	len = _printf("%x", 85632);
	len2 = printf("%x", 85632);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	_printf("%X", 85632);
	printf("%X", 85632);
	_printf("%u", UINT_MAX);
	return (0);
}
