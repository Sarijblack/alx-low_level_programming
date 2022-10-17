#include <stdio.h>

/**
 * main - print alpha in lower case
 * Return: Always success
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		purchar(lc);
	}
	purchar('\n');
	return (0);
{
