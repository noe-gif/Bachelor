/*
** EPITECH PROJECT, 2020
** matchstick_cpe
** File description:
** .c to print output messages
*/

#include "my.h"
#include "matchstick.h"
#include <stdlib.h>
#include <stdio.h>

void loop_content(void)
{
    my_putchar('\n');
    my_putstr("Your turn:\n");
    my_putstr("Line: ");
}

void print_last_player_line(void)
{
    my_printf("%c", STAR);
}

void print_last_line(void)
{
    my_printf("%c", STAR);
}

void print_ia_last_line(void)
{
    my_printf("%c", STAR);
}

void print_ia_msg(match_t *match)
{
    my_printf("AI removed %d match(es) from line %d\n",
    match->rand_matches, match->rand_line);
}
