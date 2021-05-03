/*
** EPITECH PROJECT, 2020
** norme_2.c
** File description:
** matchstick
*/

#include "my.h"
#include "matchstick.h"
#include <stdlib.h>
#include <stdio.h>

void error_condition(match_t *match, char *buf2, char *buf)
{
    if (error_match(buf2, match, buf) == 1) {
        second_initializing(match);
    }
    else if (error_match(buf2, match, buf) != 1)
        match->y = 0;
}

int second_getline(char *buf, size_t bufsize, match_t *match)
{
    if ((match->characters = getline(&buf, &bufsize, stdin) == -1))
        return (1);
    if (error_stick(buf, match) == 1) {
        initializing(match);
    }
    return (0);
}

void first_ia_loop(match_t *match, int cols)
{
    print_ia_msg(match);
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
    return;
}

void set_rand_value(match_t *match, int matches)
{
    match->rand_line = rand() % match->lines + 1;
    if (match->rand_line > match->lines)
        match->rand_line = match->rand_line - 2;
    match->rand_matches = rand() % matches + 1;
}

void ia__turn(match_t *match, char **av)
{
    my_putchar('\n');
    my_printf("AI's turn...\n");
    ia_turn(match, av);
}
