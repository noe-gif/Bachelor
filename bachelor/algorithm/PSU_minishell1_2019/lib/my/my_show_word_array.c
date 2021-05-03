/*
** EPITECH PROJECT, 2019
** show array
** File description:
** show array
*/

#include <stddef.h>
#include <unistd.h>
#include "../../include/my.h"

int my_show_word_array(char * const *tab)
{
    int i = 0;

    while (tab[i + 1] != 0) {
        if (my_strlen(tab[i]) == 0)
            i++;
        else {
            my_putstr(tab[i]);
            my_putchar('\n');
            i++;
        }
    }
    my_putstr(tab[i]);
    my_putchar('\n');
    return (0);
}
