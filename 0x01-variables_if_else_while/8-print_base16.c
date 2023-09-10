#include <stdio.h>
/**
 * main -start point of the program
 * putchar prints of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
char a;
for (a = '0'; a <= 'f'; a++)
{
if ((a >= '0' && a <= '9') || (a >= 'a' && a <= 'f'))
{
putchar(a);
putchar('\n');
}
}
return (0);
}

