#include <stdio.h>
/**
 * main - main part of the program
 * putchar prints the alphabets without q and e
 * Return: 0
 */
int main(void)
{
char k;
for (k = 'a'; k <= 'z'; k++)
{
if (k != 'e' && k != 'q')
putchar(k);
}
putchar('\n');
return (0);
}
