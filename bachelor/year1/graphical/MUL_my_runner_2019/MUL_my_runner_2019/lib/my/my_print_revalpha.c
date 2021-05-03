/*
** EPITECH PROJECT, 2019
** my_print_revalpha
** File description:
** reva
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_print_revalpha(void)
{
    char c;

    c = 'z';
    while (c >= 'a') {
        my_putchar(c);
        c = c - 1;
    }
    return (0);
}
