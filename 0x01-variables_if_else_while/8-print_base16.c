#include <unistd.h>
#include <stdio.h>
/**
 * main -start point of the program
 * putchar prints of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
int 2;
char b;
for (2 = '0'; 2 < 10; 2)
putchar((2 % 10) + '0');
for (b = 'a'; b <= 'f'; b++)
putchar(b);
putchar('\n');
return (0);
}
