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
	int n;
	int m;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	m = n % 10;

	if (m > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, m);
	}
	else if (m == 0)
	{
		printf("Last digit of %d is %d and is 0", n, m);
	}
	else if (0 < m && 6 > m)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, m);
	}

	return (0);
}

