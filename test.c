#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int d, f, g, h;
    d = _printf("Let's try to printf a simple sentence.\n");
    printf("Let's try to printf a simple sentence.\n");
    f = _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
   g = _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
   h = _printf("Percent:[%%]\n");
    printf("Percent:[%%]\n");
    printf("%d, %d, %d, %d", d, f, g, h);
    return (0);
}
