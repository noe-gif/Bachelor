/*
** EPITECH PROJECT, 2019
** itoa
** File description:
** itoa
*/

#include <stdlib.h>
#include <unistd.h>

char *my_itoa(int nbr)
{
    char *buffer;
    int	i;
    int	power;

    power = 10;
    i = 0;
    while ((nbr / power) > 0) {
        power = power * 10;
        i++;
    }
    buffer = malloc(sizeof(char) * (10));
    power = i;
    buffer[i + 1] = '\0';
    while (i >= 0) {
        buffer[i] =  (nbr - ((nbr/10) * 10) + '0');
        i--;
        nbr = nbr / 10;
    }
    return (buffer);
}
