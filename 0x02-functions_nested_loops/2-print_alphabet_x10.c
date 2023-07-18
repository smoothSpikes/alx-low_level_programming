#include <stdlib.h>
#include <stdio.h>

/**
  * print_alphabet_x10 - "entry"
  * Description - 'Hey'
  * Return: 0 (success)
  *
  *
  */


void print_alphabet_x10 (void)
{
	char a;

	for (a = 'a'; a <='z'; a++)
	{
		for (a = 1; a <= 10; a++)
		{
			putchar(a);
		}
		putchar('\n');
	}
}
