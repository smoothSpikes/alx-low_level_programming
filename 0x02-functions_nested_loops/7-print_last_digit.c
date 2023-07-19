#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * print_last_digit - "prints last digit of a number"  
  * @r: digit
  * Return: last digit
  *
  *
  */

int print_last_digit(int r)
{
	int last = abs(r) % 10;
	
	putchar(last);
	return(last);
}
