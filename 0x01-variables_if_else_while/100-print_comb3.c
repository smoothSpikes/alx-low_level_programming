#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
  * main - "entry"
  * Description - 'Hey'
  * Return: 0 (success)
  *
  *
  */

int main(void)
{
	int i;
	int r;

	for (i = 0; i < 10; i++)
	{
		for (r = 1; r < 10; i++)
		{
			if (((i != r) || ((i == 9)) && (i == 8)))
			{
			putchar(i + '0');
			}
		}


	return (0);
	}

}
