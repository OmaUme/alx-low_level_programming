#include "main.h"
/**
 *_isalpha - checks the code for alphabetic character
 *@c: is the character to be checked
 *Return: 1 if char is a letter, otherwise 0
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

