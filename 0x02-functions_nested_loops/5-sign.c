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
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
