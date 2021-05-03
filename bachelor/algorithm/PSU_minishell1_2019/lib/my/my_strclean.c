/*
** EPITECH PROJECT, 2020
** strclean
** File description:
** lib
*/

#include "../../include/my.h"
#include <string.h>
#include <stdio.h>

void my_strclean(char *s)
{
    const char *d = s;

    do {
        while (*d == ' ') {
            ++d;
        }
    }
    while (*s++ = *d++);
}
