#include <stdio.h>
/**
* main - main part of the program
* putchar prints the alphabet in capital and small letters
* Return: 0
*/
int main(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
putchar(i);
for (i = 'A'; i <= 'Z'; i++)
putchar(i);
putchar('\n');
return (0);
}
