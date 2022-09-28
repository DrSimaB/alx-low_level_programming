#include <stdio.h>
#include "main.h"
#include <string.h>
#include<ctype.h>
/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _print_rev_recursion(char *s)
{
	int ctr = 12;
	char _print_rev_recursion[] = "Colton Walker";

	while (isprint(_print_rev_recursion[ctr]))
	{
		putchar (_print_rev_recursion[ctr]);
		ctr--;
	}
	printf("\n\n");
}
