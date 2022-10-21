#include "main.h"
#include <stdio.h>
/**
 * print_line - print a straight line using '_'
 * @n; the number of '_' to be printed
 * Return: success
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = '0'; len < 'n'; len++;)
			 _putchar('_');
	}
	_putchar('\n');
}
