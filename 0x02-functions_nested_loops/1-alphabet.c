#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Description: This function prints the lowercase alphabet from 'a' to 'z'
 *              followed by a new line character.
 *
 * Return: Always 0.
 *
 */


void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
