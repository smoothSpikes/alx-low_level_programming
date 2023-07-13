#include <stdio.h>

/**
 * main - entry point
 *
 * Description: 'this is the desc'
 *
 *
 * Return: always 0 (sucess)
 *
 */

int main(void)
{
	size_t size1 = sizeof(char);
	size_t size2 = sizeof(int);
	size_t size3 = sizeof(long int);
	size_t size4 = sizeof(long long int);
	size_t size5 = sizeof(float);

	printf("Size of a char: %zu byte(s)\n", size1);
	printf("Size of an int: %zu byte(s)\n", size2);
	printf("Size of a long int: %zu byte(s)\n", size3);
	printf("Size of a long long int: %zu byte(s)\n", size4);
	printf("Size of a float: %zu byte(s)\n", size5);
	return (0);
}
