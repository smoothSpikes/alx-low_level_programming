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
	int start = 'a';
	int end = 'z';
	int i;

	for (i = start; i <= end; i++)
	{
		putchar(i);
	}

	putchar('\n');

	for (i = start; i <= end; i++)
	{
		putchar(toupper(i));
	}
}
