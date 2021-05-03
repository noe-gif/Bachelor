/*
** EPITECH PROJECT, 2019
** text.c
** File description:
** runner
*/

#include "defender.h"
#include "my.h"
#include <stdlib.h>

void countdown_text_create(window_t *global)
{
    char *countdown_string = my_itoa(global->game_management->countdown);

    global->text_management->countdown_text_font =
    sfFont_createFromFile("resources/font/fourth_game.ttf");
    global->text_management->countdown_text_position.x = 650;
    global->text_management->countdown_text_position.y = 300;
    global->text_management->countdown_text = sfText_create();
    sfText_setString(global->text_management->countdown_text, countdown_string);
    sfText_setFont(global->text_management->countdown_text,
    global->text_management->countdown_text_font);
    sfText_setColor(global->text_management->countdown_text, sfWhite);
    sfText_setCharacterSize(global->text_management->countdown_text, 60);
    sfText_setPosition(global->text_management->countdown_text,
    global->text_management->countdown_text_position);
    free(countdown_string);
}
