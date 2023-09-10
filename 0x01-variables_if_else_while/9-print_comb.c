#include <unistd.h>
#include <stdio.h>
/**
 * main - start point of the program
 * putchar prints the result
 * Return: 0
 */
int main(void)
{
int a;
for (a = 0; a <= 9; a++)
{
putchar((a % 10) + '0');
if (a == 9)
continue;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
