#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * positive_or_negative -assign a random number to the variables
 * Print a random num
 * i > 0 print positive
 * i < 0 print negative
 * else print zero
 * Return: no return
 */
void positive_or_negative(void)
{
int i;
i = 'n';
if (i > 0)
printf("%d is positive\n", i);
else if (i < 0)
printf("%d is negative\n", i);
else
printf("%d is zero\n", i);
}
