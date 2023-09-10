#include <stdio.h>
#include <unistd.h>
/**
 * main -main part of the program
 * putchar prints the number
 * Return: 0
 */
int main(void)
{
int a;
for (a = 0; a < 10; a++)
{
putchar(a + '0');
}
putchar('\n');
return (0);
}
