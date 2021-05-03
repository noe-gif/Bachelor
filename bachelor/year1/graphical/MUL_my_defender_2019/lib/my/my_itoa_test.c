/*
** EPITECH PROJECT, 2019
** itoa
** File description:
** itoa
*/

#include <stdlib.h>
#include <unistd.h>

void division_convert(int power, int nbr, int i)
{
    i = 0;
    while ((nbr / power) > 0) {
        power = power * 10;
        i++;
    }
}

void convert(int nbr, int i, char *buffer)
{
    while (i >= 0) {
        buffer[i] =  (nbr - ((nbr/10) * 10) + '0');
        i--;
        nbr = nbr / 10;
        i--;
    }
}

char *my_itoa(int nbr)
{
    char *buffer;
    int	i = 0;
    int	power = 10;

    division_convert(power, nbr, i);
    buffer = malloc(sizeof(char) * 10);
    power = i;
    buffer[i + 1] = '\0';
    convert(nbr, i, buffer);
    return (buffer);
}
