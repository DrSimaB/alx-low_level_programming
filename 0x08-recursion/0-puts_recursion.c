#include <stdio.h>
#include "main.h"
#include<ctype.h>
/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriatelys
 */
void _puts_recursion(char *s)
{
	int ctr = 0;
	char _puts_recursion[] = "Puts with recursion";

	while (isprint(_puts_recursion[ctr]))
	{
		putchar (_puts_recursion[ctr]);
		ctr++;
	}
	printf("\n\n");
}
