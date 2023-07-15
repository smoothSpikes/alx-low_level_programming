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
	int s = 'a';
	int e = 'f';

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (i = s; i <= e; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
