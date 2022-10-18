#include "main.h"

/**
 * print_address - prints address of input in hexa format
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_address(va_list l, flags_t *f)
{
	char *str;
	unsigned long int a = va_arg(l, unsigned long int);

	register int count = 0;

	(void)f;

	if (!a)
		return (_puts("(nil)"));
	str = convert(a, 16, 1);
	count += _puts("0x");
	count += _puts(str);
	return (count);
}
