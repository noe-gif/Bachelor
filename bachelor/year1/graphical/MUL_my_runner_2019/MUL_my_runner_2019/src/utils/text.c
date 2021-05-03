/*
** EPITECH PROJECT, 2019
** text.c
** File description:
** runner
*/

#include "../../include/runner.h"

void menu_title(menu_t *menu)
{
    char *runner = "Runner";

    menu->title_font = sfFont_createFromFile("resources/font/medieval.ttf");
    menu->title_position.x = 50;
    menu->title_position.y = 15;
    menu->title = sfText_create();
    sfText_setString(menu->title, runner);
    sfText_setFont(menu->title, menu->title_font);
    sfText_setColor(menu->title, sfWhite);
    sfText_setCharacterSize(menu->title, 100);
    sfText_setPosition(menu->title, menu->title_position);
}

void play_button(menu_t *menu)
{
    char *runner = "Play";

    menu->play_button_font =
        sfFont_createFromFile("resources/font/medieval.ttf");
    menu->play_button_position.x = 155;
    menu->play_button_position.y = 230;
    menu->play_button = sfText_create();
    sfText_setString(menu->play_button, runner);
    sfText_setFont(menu->play_button, menu->play_button_font);
    sfText_setColor(menu->play_button, sfWhite);
    sfText_setCharacterSize(menu->play_button, 70);
    sfText_setPosition(menu->play_button, menu->play_button_position);
}

void quit_button(menu_t *menu)
{
    char *runner = "Quit";

    menu->quit_button_font =
        sfFont_createFromFile("resources/font/medieval.ttf");
    menu->quit_button_position.x = 155;
    menu->quit_button_position.y = 460;
    menu->quit_button = sfText_create();
    sfText_setString(menu->quit_button, runner);
    sfText_setFont(menu->quit_button, menu->quit_button_font);
    sfText_setColor(menu->quit_button, sfWhite);
    sfText_setCharacterSize(menu->quit_button, 70);
    sfText_setPosition(menu->quit_button, menu->quit_button_position);
}

void draw_text(menu_t *menu, window_t *global)
{
    sfRenderWindow_drawText(global->window, menu->title, NULL);
    sfRenderWindow_drawText(global->window, menu->play_button, NULL);
    sfRenderWindow_drawText(global->window, menu->quit_button, NULL);
}
