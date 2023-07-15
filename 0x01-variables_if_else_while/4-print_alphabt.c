#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - "entry"
  *
  * Description - 'Hey'
  *
  * Return: 0 (success)
  *
  */


int main(void)
{
	int start = 'a';
	int end = 'z';
	int i;

	for (i = start; i <= end; i++)
	{
		if ((i != 'q') && (i != 'e'))
		{
		putchar(i);
		}
	}

	putchar('\n');

	return (0);
}
