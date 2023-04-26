#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;

    len = _printf("please work\n");
    _printf("Length:[%d, %i]\n", len, -2147483648);
    return 0;
}
