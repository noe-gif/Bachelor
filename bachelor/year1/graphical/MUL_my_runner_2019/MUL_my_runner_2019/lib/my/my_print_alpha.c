/*
** EPITECH PROJECT, 2019
** print alpha
** File description:
** d
*/

#include <unistd.h>

void my_putchar(char c);

int my_print_alpha(void)
{
    char c = 'a';

    while (c <= 'z') {
        my_putchar(c);
        c = c + 1;
    }
    return (0);
}
