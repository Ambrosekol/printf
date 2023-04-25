# Custom printf function

## Description
The printf function sends formatted output to stdout. For the purposes of learning, the cohort 13 students Ambrose and Ademola have developed a custom _printf() function.

The format string of the _printf() function is a character string, beginning and ending in its initial shift state, if any. Arguments are placed using the percentage % operator.

## Resources
- Secrets of printf by Don Colton
- Authorized functions and macros
- write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)
Compilation
The code must be compiled using the following command:

console
Copy code
$ gcc -Wall -Werror -Wextra -pedantic *.c
Be careful not to push any C file containing a main function in the root directory of your project (you could have a test folder containing all your test files including main functions).

The main files should include the main header file (main.h): #include main.h

Usage
Prototype
c
Copy code
int _printf(const char *format, ...);
General use
c
Copy code
_printf("format string", var1, var2, ...);
Examples
Basic string: _printf("%s Alx", "Hello");
Output: Hello Alx

Print integers: _printf("This is an array element: arr[%d]:%c", 32, arr[32]);
Output: This is an array element arr[32]:A