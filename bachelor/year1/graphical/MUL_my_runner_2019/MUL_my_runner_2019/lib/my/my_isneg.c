/*
** EPITECH PROJECT, 2019
** my_isneg
** File description:
** isneg
*/

#include <unistd.h>

void my_putchar(int n);

int my_isneg(int n)
{
    if (n < 0)
        my_putchar('N');
    else
        my_putchar('P');
    return (0);

}

