#include "main.h"
int main(void)
{
    char a = '7';
    char c = '8';
    char b = '9';
    int d;
    d = _printf("this are my numbers: %c, %c, %c\n", a, c, b);
    printf("%d\n", d);
    return (0);
}