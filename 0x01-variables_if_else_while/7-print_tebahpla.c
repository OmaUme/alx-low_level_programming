#include <unistd.h>
#include <stdio.h>
/**
 * main - main is the start point of the program
 * putchar prints the lowercase alphabets in reverse order
 * Return: 0
 */
int main(void)
{
char b;
for (b = 'z'; b >= 'a'; b--)
putchar(b);
putchar('\n');
return (0);
}
