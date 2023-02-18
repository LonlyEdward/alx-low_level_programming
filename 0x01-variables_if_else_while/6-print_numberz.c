#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all single digit numbers of base 10 starting from 0
 * Return: Always 0 (Success)
 */

int main(void)
{
        char c = '0';

        while (c <= '10')
        {
                putchar(48 + c);
                c++;
        }

        putchar('\n');
        return (0);
}
