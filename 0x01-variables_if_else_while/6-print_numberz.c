#include <unistd.h>
#include <stdio.h>
/**
 * main - start point of the program
 * putchar prints digits starting from 10
 * Return: 0
 */
int main(void)
{
int a;
for (a = 0; a <= 10; a++)
{
putchar(a + '0');
}
putchar('\n');
return (0);
}
