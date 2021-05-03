/*
** EPITECH PROJECT, 2020
** norme
** File description:
** matchstick
*/

#include "my.h"
#include "matchstick.h"
#include <stdlib.h>
#include <stdio.h>

int message_lost_player(int remaining_stick)
{
    if (remaining_stick == 0) {
        my_printf("You lost, too bad...\n");
        return (2);
    }
    return (0);
}

int message_lost_ia(int remaining_stick)
{
    if (remaining_stick == 0) {
        my_printf("I lost... snif... but I'll get you next time!!\n");
        return (1);
    }
    return (0);
}

void call_ia_turn(match_t *match, char **av)
{
    ia__turn(match, av);
    my_putchar('\n');
}

void hard_ia_conditions(int remain, match_t *match, int new_matches,
    int new_line)
{
    remain = count_last_stick(match);
    if (remain == 2 && match->max_sticks >= 1)
        new_matches = 1;
    if (remain == 3 && match->max_sticks >= 2)
        new_matches = 2;
    if (remain == 4 && match->max_sticks >= 3)
        new_matches = 3;
    if (remain == 5 && match->max_sticks >= 4)
        new_matches = 4;
}

void match_game_input(match_t *match, char *buf, char *buf2,
    int remaining_stick)
{
    print_updated_board_game(buf, buf2, match);
    remaining_stick = count_last_stick(match);
}
