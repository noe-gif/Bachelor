/*
** EPITECH PROJECT, 2020
** generate_map
** File description:
** matchstick
*/

#include "my.h"
#include "matchstick.h"
#include <stdlib.h>
#include <stdio.h>

void create_tab(match_t *match)
{
    int i = 0;
    int j = 1;
    int row = match->lines + 1;

    match->tab = malloc(sizeof(char *) * ((match->lines * 2000 + 2)));
    if ((match->tab = malloc(sizeof(char *) *
    ((match->lines * 2000 + 2)))) == NULL)
        return;
    for (;i < row; i++) {
        match->tab[i] = malloc(sizeof(char) * (j * 2000 + 1));
        j += 2;
    }
    match->tab[i] = '\0';
}

void fill_bords(match_t *match, int j, int i, int cols)
{
    for (;cols != 0; cols--) {
        match->tab[i][j] = STAR;
        j++;
    }
    j = 1;
    i = 1;
    cols = match->lines * 2 + 1;
    for (;match->tab[i] != NULL; i++) {
        for (j = 0;j <= cols; j++) {
            if (j == 0)
                match->tab[i][j] = STAR;
            else if (j < cols)
                match->tab[i][j] = SPACE;
            if (j == cols)
                match->tab[i][j - 1] = STAR;
        }
    }
}

void fill_sticks(match_t *match, int count,
int j, int i)
{
    while (i <= match->lines) {
        j = (match->lines - count);
        while (j < (match->lines + count + 1)) {
            match->tab[i][j] = STICK;
            j++;
        }
        count++;
        i++;
    }
}

void fill_tab(match_t *match)
{
    int count = 0;
    int j = 0;
    int i = 0;
    int cols = match->lines * 2 + 1;

    fill_bords(match, j, i, cols);
    j = match->lines;
    i = 1;
    fill_sticks(match, count, j, i);
    cols = match->lines * 2 + 1;
    i = match->lines + 0;
    j = 0;
    my_show_word_array(match->tab);
    for (cols = match->lines * 2 + 1; cols != 0; cols--) {
        print_last_line();
    }
    my_putchar('\n');
}
