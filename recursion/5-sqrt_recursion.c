
<<<<<<< HEAD
=======
/**
 * check_sqrt - checks if i is the square root of n
 * @n: number
 * @i: number to test
 *
 * Return: square root of n, or -1
 */
int check_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);

	if (i * i > n)
		return (-1);

	return (check_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find square root of
 *
 * Return: natural square root, or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (check_sqrt(n, 0));
}
>>>>>>> d43d9e9 (task 5)
