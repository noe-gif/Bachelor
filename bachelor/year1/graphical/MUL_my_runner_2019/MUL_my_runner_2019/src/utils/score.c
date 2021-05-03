/*
** EPITECH PROJECT, 2020
** score
** File description:
** runner
*/

#include "../../include/runner.h"
#include "../../include/my.h"
#include <stdlib.h>

void create_score(select_player_t *select)
{
    char *runner = my_itoa(select->seconds);

    select->score_font = sfFont_createFromFile("resources/font/medieval.ttf");
    select->score_position.x = 1000;
    select->score_position.y = 15;
    select->score_text = sfText_create();
    sfText_setString(select->score_text, runner);
    sfText_setFont(select->score_text, select->score_font);
    sfText_setColor(select->score_text, sfBlack);
    sfText_setCharacterSize(select->score_text, 100);
    sfText_setPosition(select->score_text, select->score_position);
    free(runner);
}
