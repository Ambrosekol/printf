# Custom printf function

## Description
The printf function sends formatted output to stdout. For the purposes of learning, the cohort-13 students ([Ambrose K.](https://github.com/Ambrosekol "Learn about Ambrose!") and [Ademola ASAMU](https://github.com/AdemolaAsamu "Learn about Ademola!")) have developed a custom betty compliant _printf() function.

The format string of the _printf() function is a character string, beginning and ending in its initial shift state, if any. Arguments are placed using the percentage "%" operator.

## Resources
- Secrets of printf by Don Colton

## Authorized functions and macros
- write (man 2 write)
- malloc (man 3 malloc)
- free (man 3 free)
- va_start (man 3 va_start)
- va_end (man 3 va_end)
- va_copy (man 3 va_copy)
- va_arg (man 3 va_arg)

## Compilation
The code must be compiled using the following command:

- $ gcc -Wall -Werror -Wextra -pedantic *.c

The main files should include the main header file (main.h): #include main.h

# Usage

## Prototypes

- int _printf(const char *format, ...);
- typedef struct checker
- {
-	 char *id;
-	 int (*func)();
- } check_match;
- int putstrng(va_list list);
- int putper(void);
- int print_char(va_list arg);
- int putint(va_list list);
- int putni(va_list list, int print_sign);
- int putbin(va_list list);

## General use

_printf("format string", var1, var2, ...);

# Examples
- Basic string: _printf("%s Alx\n", "Hello");
- Output: Hello Alx

- Print integers: _printf("This is an array element: arr[%d]:%c\n", 32, arr[32]);
- Output: This is an array element arr[32]:A

# Specifiers

| Specifier	    | Output    | Example   |
| ------------ | ------------ | ---------- |
| c	    | Character	    | y |
| d or i	| Signed integer	| 1024, -1024  |
| s	| String of characters	| Hello Alx |
| b	| Binary representation of unsigned integer	| 01010110 |
| u	| Unsigned integer	| 1024 |
| o	| Unsigned octal	| 432 |
| x	| Unsigned hexadecimal integer	| 3ca |
| X	| Unsigned hexadecimal integer (uppercase)	| 3CA |
| S	| String with hex-ascii value replacing special characters	| \x0A\x0A |
| p	| Pointer address	| 0x403212 |
| r	| Reversed string of characters	| dlroW olleH |
| R	| ROT13 translation of string	| Uryyb |

# Flags
- (Halted for now...)

# Contributors
- [Ambrose K.](https://github.com/Ambrosekol "Learn about Ambrose!")
- [Ademola ASAMU](https://github.com/AdemolaAsamu "Learn about Ademola!")