#include "main.h"
#include <stdio.h>

/**
  * more_numbers - prints more numbers
  *
  *
  */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; )
	{
		for (r = 0; r <= 14; r++)
		{
			putchar(r + '0');
		}

		i++;

		putchar('\n');
	}

	putchar('\n');
}

