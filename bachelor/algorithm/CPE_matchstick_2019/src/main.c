/*
** EPITECH PROJECT, 2020
** match
** File description:
** cpe
*/

#include "my.h"
#include "matchstick.h"
#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
    match_t *match = malloc(sizeof(match_t));

    match->buf = malloc(sizeof(char *) *  32 + 1);
    match->buf2 = malloc(sizeof(char *) *  32 + 1);
    match->remaining_stick = 1;
    match->y = 0;
    match->last_stick = 0;
    if (ac <= 1)
        return (84);
    if (error_main(ac, av) == 84)
        return (84);
    match->max_sticks = my_getnbr(av[2]);
    match->lines = my_getnbr(av[1]);
    create_tab(match);
    fill_tab(match);
    int i = game_loop(match, av);
    if (i == 2)
        return (2);
    else if (i == 1)
        return (1);
    return (0);
}
