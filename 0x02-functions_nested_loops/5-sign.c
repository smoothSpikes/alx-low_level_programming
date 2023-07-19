#include "main.h"
#include <stdio.h>

/**
  * print_sign - checks for int sign
  * @n: ckacked int
  * Return: "1" if +, "0" if "0", "-1" if +
  *
  */


int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");

		return (1);
	}
	else if (n == 0)
	{
		printf("0");
		return (0);
	}
	else if (n < 0)
	{
		printf("-1");
		return (-1);
	}

	return 0;
}
