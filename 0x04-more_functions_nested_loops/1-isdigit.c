#include "main.h"
#include <ctype.h>
/**
  * _isdigit - checks if a char is digit
  * @c : char to check
  * Return: 1 if digit,0 otherwise
  *
  *
  */

int _isdigit(int c)
{
	for (c = 0; c <= 9; c++)
	{
		if (isdigit(c))
		{
			return (1);
		}
	}
	return (0);
}
