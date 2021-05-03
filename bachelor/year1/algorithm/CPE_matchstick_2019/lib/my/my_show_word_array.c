/*
** EPITECH PROJECT, 2019
** show array
** File description:
** show array
*/

#include <stddef.h>
#include <unistd.h>
#include "../../include/my.h"

void my_show_word_array(char * const *tab)
{
    int i = 0;
    int b = 0;

    while (tab[i] != 0) {
        my_printf("%s\n", tab[i]);
        i++;
    }
}
