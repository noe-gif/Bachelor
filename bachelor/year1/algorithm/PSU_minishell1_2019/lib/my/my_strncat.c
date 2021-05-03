/*
** EPITECH PROJECT, 2019
** my_strncat
** File description:
** cat
*/

#include "../../include/my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int cnt_dest = my_strlen(dest);
    int cnt_src = 0;

    while (cnt_src < nb && src[cnt_src] != '\0')
    {
        dest[cnt_dest] = src[cnt_src];
        cnt_src++;
        cnt_dest++;
    }
    dest[cnt_dest] = '\0';
    return (dest);
}
