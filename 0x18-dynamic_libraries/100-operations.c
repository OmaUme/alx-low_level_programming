#include <stdio.h>
/**
 *int add - for addition
 *int sub - for subtration
 *int mul - for multiplication
 *int div - for division
 *int mod - for modulus
 */
int add(int a, int b)
{
	return (a+b);
}

int sub(int a, int b)
{
	return (a-b);
}

int mul(int a, int b)
{
        return (a*b);
}

int div(int a, int b)
{
	if(b != 0)
	{
        return (a/b);
	}
	else 
	{
	printf("Error: Division by zero\n");

	return (0);
	}
}

int mod(int a, int b)
{
        if(b != 0)
        {
        return (a%b);
        }
        else
        {
        printf("Error: Modulo by zero\n");

	return (0);
        }
}
