#include <stdio.h>
/**
 * main - Entry point for the program
 *
 * This function is the entry point for the program and
 * performs the main tasks of the program, including using
 * the printf function to display output.
 *
 * Return: 0 on success, non-zero on failure
 */
int main(void)
{
printf("Size of a char: %ld byte(s)\n", sizeof(char));
printf("Size of an int: %ld byte(s)\n", sizeof(int));
printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
printf("Size of a float: %ld byte(s)\n", sizeof(float));
return (0);
}
