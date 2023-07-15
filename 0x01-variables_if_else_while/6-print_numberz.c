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
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}

	putchar('\n');

	return (0);
}
