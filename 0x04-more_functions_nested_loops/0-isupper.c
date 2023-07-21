#include "main.h"
#include <ctype.h>


/**
  * _isupper - checks for ower case chars
  * @c : is the input char
  * Return: 1 if upper, 0 otherwise
  *
  *
  */

int _isupper(int c)
{

	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
