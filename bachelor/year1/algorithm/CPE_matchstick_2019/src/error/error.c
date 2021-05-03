/*
** EPITECH PROJECT, 2020
** error
** File description:
** matchstick
*/

#include "my.h"
#include "matchstick.h"
#include <stdlib.h>
#include <stdio.h>

int loop_error_positiv(char *input)
{
    int i = 0;

    while (input[i] != '\0') {
        if (input[i] < '0' || input[i] > '9') {
            my_printf("Error: invalid input (positive number expected)\n");
            return (1);
        }
        i++;
        if (input[i] == '\n')
            input[i] = '\0';
    }
    return (0);
}

int error_stick(char *input, match_t *match)
{
    int value = 0;

    value = loop_error_positiv(input);
    if (value == 1)
        return (1);
    if (my_getnbr(input) <= 0) {
        my_printf("Error: this line is out of range\n");
        return (1);
    }
    if (my_getnbr(input) > match->lines) {
        my_printf("Error: this line is out of range\n");
        return (1);
    }
    return (0);
}

int error_match(char *input2, match_t *match, char *buf)
{
    int value = 0;

    value = loop_error_positiv(input2);
    if (value == 1)
        return (1);
    if (my_getnbr(input2) > match->max_sticks) {
        my_printf("Error: you cannot remove more than"
    " %d matches per turn\n", match->max_sticks);
        return (1);
    }
    if (my_getnbr(input2) <= 0) {
        my_printf("Error: you have to remove at least one match\n");
        return (1);
    }
    if (my_getnbr(input2) > count__stick(match, my_getnbr(buf))) {
        my_printf("Error: not enough matches on this line\n");
        return (1);
    }
    return (0);
}

int count__stick(match_t *match, int line)
{
    int cols = 0;
    int stick = 0;

    while (match->tab[line][cols] != '\0') {
        if (match->tab[line][cols] == '|') {
            stick++;
        }
        cols++;
    }
    return (stick);
}

int count_remaining_line(match_t *match)
{
    int line = 0;
    int cols = 0;
    int stick = 0;

    while (match->tab[line]) {
        if (match->tab[line][cols] == '\0') {
            line++;
            cols = -1;
        }
        if (match->tab[line][cols] == '|') {
            line++;
            cols = -1;
            stick++;
        }
        cols++;
    }
    return (stick);
}
