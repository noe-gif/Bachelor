/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** jidpz
*/

#include "my.h"

char *my_revstr(char *str)
{
    char c;
    int nb  = my_strlen(str) - 1;
    int i = nb;

    while (nb > i/2) {
        c = str[nb];
        str[nb] = str[i - nb];
        str[i - nb] = c;
        nb--;
    }
    return (str);
}
