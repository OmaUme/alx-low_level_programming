#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - The main part of the program
 * Print a random num
 * n > 0 print positive
 * n < 0 print negative
 * else print zero
 * Return: 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else
printf("%d is zero\n", n);
return (0);
}
