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

int error_matches_line_ia(match_t *match, int rand)
{
    int i = 0;
    int stick = 0;

    while (match->tab[rand][i] != '\0') {
        if (match->tab[rand][i] == '|') {
            stick++;
        }
        i++;
    }
    return (stick);
}

void ia_msg(int line, int matches)
{
    my_printf("AI removed %d match(es) from line %d\n",
    matches, line);
}

void hard_ia(match_t *match, int cols)
{
    int new_matches = rand() % 2;
    int new_line = match->lines;
    int remain = 0;

    hard_ia_conditions(remain, match, new_matches, new_line);
    ia_msg(new_line, new_matches);
    while (new_matches > 0) {
        while (match->tab[new_line][cols] == '|') {
            match->tab[new_line][cols] = ' ';
            new_matches--;
        }
        cols--;
    }
    new_line--;
    my_show_word_array(match->tab);
    for (cols = match->lines * 2 + 1; cols != 0; cols--) {
        print_ia_last_line();
    }
}

void remove_ia_sticks(match_t *match, int cols)
{
    while (match->rand_matches > 0) {
        while (match->tab[match->rand_line][cols] == '|') {
            match->tab[match->rand_line][cols] = ' ';
            match->rand_matches--;
        }
        cols--;
        }
    my_show_word_array(match->tab);
    for (cols = match->lines * 2 + 1; cols != 0; cols--) {
        print_ia_last_line();
    }
}

void ia_turn(match_t *match, char **av)
{
    int matches = my_getnbr(av[2]);
    int cols = match->lines * 2 - 1;
    int remaining_sticks = 0;

    set_rand_value(match, matches);
    if (match->lines <= 4) {
        hard_ia(match, cols);
        return;
    }
    remaining_sticks = count__stick(match, match->rand_line);
    if (match->rand_matches > remaining_sticks || match->rand_matches == 0) {
        ia_turn(match, av);
    }
    else {
        first_ia_loop(match, cols);
        return;
    }
}
