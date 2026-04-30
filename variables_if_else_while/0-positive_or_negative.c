#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - checks whether n is positive, negative or zero
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;

srand(time(0));
	n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("number is positive\n");
}
else if (n < 0)
{
printf("number is negative\n");
}
else
{
printf("number is zero\n");
}
return (0);
}
