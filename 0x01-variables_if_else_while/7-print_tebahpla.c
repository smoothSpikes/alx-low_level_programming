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
	int start = 'z';
	int end = 'a';
	int i;

	for (i = start; i >= end; i--)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
