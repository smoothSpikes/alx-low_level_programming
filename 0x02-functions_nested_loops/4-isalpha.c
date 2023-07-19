#include "main.h"

/**
  * _isalpha - checks for alphanum characters
  *
  * @c : is the input char
  *
  * Return: 1 if found 0 otherwise
  */



int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
