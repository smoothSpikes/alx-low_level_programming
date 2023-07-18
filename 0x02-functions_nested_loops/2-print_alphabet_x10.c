#include <stdlib.h>
#include <stdio.h>

/**
  * print_alphabet_x10 - "entry"
  * Description - 'Hey'
  * Return: 0 (success)
  *
  *
  */


void print_alphabet_x10(void)
{
	char a;
	char i;

	for (i = 1; i <= 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			putchar(a);
		}
		putchar('\n');
	}
}
