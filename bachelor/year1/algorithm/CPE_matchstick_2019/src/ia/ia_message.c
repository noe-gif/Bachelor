/*
** EPITECH PROJECT, 2020
** create_ia
** File description:
** matchstick_cpe
*/

#include "my.h"
#include "matchstick.h"
#include <stdlib.h>
#include <stdio.h>

void ia_message_turn(match_t *match, char **av)
{
    int matches = my_getnbr(av[2]);
    int remaining_sticks = 0;

    match->rand_line = rand() % match->lines - 1;
    match->rand_matches = rand() % matches + 1;
    remaining_sticks = count__stick(match, match->rand_line);
    if (match->rand_matches >= remaining_sticks) {
        match->rand_matches = rand() % matches + 1;
        if (match->rand_matches >= remaining_sticks) {
            ia_message_turn(match, av);
        }
    }
}
