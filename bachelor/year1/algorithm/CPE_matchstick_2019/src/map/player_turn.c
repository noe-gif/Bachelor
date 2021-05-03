/*
** EPITECH PROJECT, 2020
** player_turn.c
** File description:
** matchstick
*/

#include "my.h"
#include "matchstick.h"
#include <stdlib.h>
#include <stdio.h>

int count_last_stick(match_t *match)
{
    int cols = 0;
    int stick = 0;
    int line = 1;

    while (match->tab[line] != NULL) {
        cols = 0;
        while (match->tab[line][cols] != '\0') {
            if (match->tab[line][cols] == '|') {
                stick++;
            }
            cols++;
        }
        line++;
    }
    return (stick);
}

int second_turn_loop(match_t *match, char **av, int remaining_stick)
{
    if ((match->y != 2) && (my_getnbr(match->buf2) <= match->last_stick)) {
        match_game_input(match, match->buf, match->buf2, remaining_stick);
        match->remaining_stick = count_last_stick(match);
        if (message_lost_player(match->remaining_stick) == 2)
            return (2);
        call_ia_turn(match, av);
    }
    return (0);
}

int game_loop(match_t *match, char **av)
{
    size_t bufsize = 32;
    size_t bufsize2 = 32;

    for (match->i = 0; 1;match->i++) {
        if (message_lost_ia(match->remaining_stick) == 1)
            return (1);
        if (match->i == 1) {
            content_loop_condition(match);
            if (second_getline(match->buf, bufsize, match) == 1)
                return (0);
        }
        if (match->i == 2) {
            match->last_stick = count__stick(match, my_getnbr(match->buf));
            if (function_calling(match->buf2, bufsize2, match, match->buf) == 1)
                return (0);
            if (second_turn_loop(match, av, match->remaining_stick) == 2)
                return (2);
            match->i = 0;
        }
        match->remaining_stick = count_last_stick(match);
    }
}
