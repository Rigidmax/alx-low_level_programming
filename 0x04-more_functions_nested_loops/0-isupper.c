#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = A;
    printf("%c: %d\n", c, _isupper(c));
    c = a;
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
#include "main.h"

/**
 * _isupper - Entry point
 * Description: checks is a character is uppercase
 * @c: the integer value it receives
 * Return: 1 if true. 0 if false.
 */
int _isupper(int c)
{
int i = A;

for (i = A; i <= Z; i++)
{
/* refer int c*/
if (c == i)
{
return (1);
}
}
return (0);
}
#include "main.h"

/**
 * _isupper - Entry point
 * Description: checks is a character is uppercase
 * @c: the integer value it receives
 * Return: 1 if true. 0 if false.
 */
int _isupper(int c)
{
    int i = A;

    for (i = A; i <= Z; i++)
    {
    /* refer int c*/
    if (c == i)
    {
    return (1);
    }
    }
    return (0);
}
