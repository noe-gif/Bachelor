/*
** EPITECH PROJECT, 2019
** my_get_char
** File description:
** my_put_nbr
*/

#include "../../include/my.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char *my_rev_str(char *str);

int my_buffer_nbr(char buffer[], int index, int n)
{
    char p;

    if (n != 0) {
        p = (n % 10) + 48;
        buffer[index] = p;
        index++;
        buffer[index] = '\0';
        my_buffer_nbr(buffer, index, n/10);
    }
    return (0);
}

char *my_get_char(int n)
{
    int index = 0;
    char *buffer = malloc(sizeof(char) * 12);

    if (n == 0) {
        buffer[0] = '0';
        buffer[1] = '\0';
        return (buffer);
    } else if (n < 0) {
        buffer[0] = '-';
        n = n * -1;
        index = index + 1;
    }
    my_buffer_nbr(buffer, index, n);
    my_rev_str(buffer);
    return (buffer);
}
