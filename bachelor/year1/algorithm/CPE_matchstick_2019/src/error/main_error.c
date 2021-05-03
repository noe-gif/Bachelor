/*
** EPITECH PROJECT, 2020
** cpe_matchstick
** File description:
** input_errors
*/

#include "my.h"
#include "matchstick.h"
#include <stdlib.h>
#include <stdio.h>

int error_main(int ac, char **av)
{
    if (ac == 2) {
        my_printf("You must submit the [MAX_REMOVES]"
    ", see ./matchstick -h\n");
        return (84);
    }
    if (my_getnbr(av[1]) >= 100 || my_getnbr(av[1]) <= 1) {
        my_printf("%d lines is not right, use ./matchstick -h\n",
    my_getnbr(av[1]));
        return (84);
    }
    if (my_getnbr(av[2]) <= 0) {
        my_printf("%d as [MAX_REMOVE] is too few"
    ", use ./matchstick -h\n",
    my_getnbr(av[2]));
        return (84);
    }
    return (0);
}
