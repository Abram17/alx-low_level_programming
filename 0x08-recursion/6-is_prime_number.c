#include "main.h"

/**
* is_prime_number - checks if number is prime
*
* @n: input number
*
* Return: 1 if prime
*         0 otherwise
*/

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
* check_prime - checks if number is prime
*
* @n: input number
* @dev: devision factor
*
* Return: 1 if prime
*         0 otherwise
*/

int check_prime(int n, int dev)
{
	if (dev >= n && n > 1)
	{
		return (1);
	}
	if (n % dev == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, dev + 1));
	}
}
