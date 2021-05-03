/*
** EPITECH PROJECT, 2020
** norm.c
** File description:
** matchstick
*/

#include "my.h"
#include "matchstick.h"
#include <stdlib.h>
#include <stdio.h>

int function_calling(char *buf2, size_t bufsize2, match_t *match,
    char *buf)
{
    if (first_getline(match, buf2, bufsize2) == 1)
        return (1);
    error_condition(match, buf2, buf);
    return (0);
}

void content_loop_condition(match_t *match)
{
    if (match->y != 1 && match->y != 2)
        loop_content();
}

int first_getline(match_t *match, char *buf2, size_t bufsize2)
{
    my_putstr("Matches: ");
    if ((match->characters2 = getline(&buf2, &bufsize2, stdin) == -1))
        return (1);
    return (0);
}

void second_initializing(match_t *match)
{
    my_putstr("Line: ");
    match->i = 0;
    match->y = 2;
}

void initializing(match_t *match)
{
    my_putstr("Line: ");
    match->y = 1;
    match->i = 0;
}
