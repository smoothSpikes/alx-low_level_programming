#include "main.h"

/**
  * print_line - print a line
  * @n : lenght
  *
  *
  */

void print_line(int n)
{
	int n, i;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			putchar('_');
		}
	}
	putchar('\n');

}

