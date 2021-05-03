/*
** EPITECH PROJECT, 2019
** text.c
** File description:
** runner
*/

#include "defender.h"
#include "my.h"
#include <stdlib.h>

void clock_text_create(window_t *global)
{
    char *sec = my_strcat(my_itoa(global->
    clock_management->seconds), " sec");
    char *minutes = my_strcat(my_itoa(global->
    clock_management->minutes), " min");
    char *min = my_strcat("  ", sec);
    char *time_string = my_strcat(minutes, min);

    global->text_management->time_text_font =
    sfFont_createFromFile("resources/font/fourth_game.ttf");
    global->text_management->time_text_position.x = 395;
    global->text_management->time_text_position.y = 636;
    global->text_management->time_text = sfText_create();
    sfText_setString(global->text_management->time_text, time_string);
    sfText_setFont(global->text_management->time_text,
    global->text_management->time_text_font);
    sfText_setColor(global->text_management->time_text, sfWhite);
    sfText_setCharacterSize(global->text_management->time_text, 30);
    sfText_setPosition(global->text_management->time_text,
    global->text_management->time_text_position);
    free(time_string);
}

void money_text_create(window_t *global)
{
    char *money_string = my_itoa(global->game_management->money);

    global->text_management->money_text_font =
    sfFont_createFromFile("resources/font/fourth_game.ttf");
    global->text_management->money_text_position.x = 260;
    global->text_management->money_text_position.y = 0;
    global->text_management->money_text = sfText_create();
    sfText_setString(global->text_management->money_text, money_string);
    sfText_setFont(global->text_management->money_text,
    global->text_management->money_text_font);
    if (global->game_management->isnt_enough == 0)
        sfText_setColor(global->text_management->money_text, sfWhite);
    if (global->game_management->isnt_enough == 1)
        sfText_setColor(global->text_management->money_text, sfRed);
    sfText_setCharacterSize(global->text_management->money_text, 35);
    sfText_setPosition(global->text_management->money_text,
    global->text_management->money_text_position);
    free(money_string);
}

void lives_text_create(window_t *global)
{
    char *lives_string = my_itoa(global->game_management->lives);

    global->text_management->lives_text_font =
    sfFont_createFromFile("resources/font/fourth_game.ttf");
    global->text_management->lives_text_position.x = 660;
    global->text_management->lives_text_position.y = 0;
    global->text_management->lives_text = sfText_create();
    sfText_setString(global->text_management->lives_text, lives_string);
    sfText_setFont(global->text_management->lives_text,
    global->text_management->lives_text_font);
    sfText_setColor(global->text_management->lives_text, sfWhite);
    sfText_setCharacterSize(global->text_management->lives_text, 35);
    sfText_setPosition(global->text_management->lives_text,
    global->text_management->lives_text_position);
    free(lives_string);
}

void waves_text_create(window_t *global)
{
    char *waves_string = my_strcat("Waves : ",
    my_itoa(global->game_management->waves));

    global->text_management->waves_text_font =
    sfFont_createFromFile("resources/font/fourth_game.ttf");
    global->text_management->waves_text_position.x = 650;
    global->text_management->waves_text_position.y = 635;
    global->text_management->waves_text = sfText_create();
    sfText_setString(global->text_management->waves_text, waves_string);
    sfText_setFont(global->text_management->waves_text,
    global->text_management->waves_text_font);
    sfText_setColor(global->text_management->waves_text, sfWhite);
    sfText_setCharacterSize(global->text_management->waves_text, 30);
    sfText_setPosition(global->text_management->waves_text,
    global->text_management->waves_text_position);
    free(waves_string);
}

void draw_game_text(window_t *global)
{
    sfRenderWindow_drawText(global->window,
    global->text_management->time_text, NULL);
    sfRenderWindow_drawText(global->window,
    global->text_management->money_text, NULL);
    sfRenderWindow_drawText(global->window,
    global->text_management->lives_text, NULL);
    sfRenderWindow_drawText(global->window,
    global->text_management->waves_text, NULL);
}
