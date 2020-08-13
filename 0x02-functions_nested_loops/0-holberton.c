#include "holberton.h"

/**
 * main - write holberton
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char *s = "Holberton";
    int i = 0;

    while (i < 9)
    {
        _putchar(s[i]);
        i++;
    }
    _putchar('\n');
    return (0);
}
