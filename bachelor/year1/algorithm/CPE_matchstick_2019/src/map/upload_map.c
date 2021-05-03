/*
** EPITECH PROJECT, 2020
** update_map
** File description:
** matchstick
*/

#include "my.h"
#include "matchstick.h"
#include <stdlib.h>
#include <stdio.h>

int error_matches_line(match_t *match, char *input)
{
    int line = my_getnbr(input);
    int i = 0;
    int stick = 0;

    while (match->tab[line][i] != '\0') {
        if (match->tab[line][i] == '|') {
            stick++;
        }
        i++;
    }
    return (stick);
}

void print_updated_board_game(char *input, char *input2,
match_t *match)
{
    int line = 0;
    int removes = 0;
    int cols = match->lines * 2 + 1;

    line = my_getnbr(input);
    removes = my_getnbr(input2);
    my_printf("Player removed %d match(es) from line %d\n",
    removes, line);
    remove_matches(line, removes, match);
    my_show_word_array(match->tab);
    for (; cols != 0; cols--) {
        print_last_player_line();
    }
    my_putchar('\n');
}

void remove_matches(int lines, int matches,
                    match_t *match)
{
    int cols = match->lines * 2 + 1;

    while (matches > 0) {
        if (match->tab[lines][cols] == '|') {
            match->tab[lines][cols] = ' ';
            matches--;
        }
        cols--;
    }
}
