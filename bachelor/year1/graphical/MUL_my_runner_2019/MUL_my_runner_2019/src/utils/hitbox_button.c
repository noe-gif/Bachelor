/*
** EPITECH PROJECT, 2020
** hitbox
** File description:
** runner
*/

#include "../../include/runner.h"
#include <stdio.h>

void click_button_menu(window_t *global, sfMouseButtonEvent event, menu_t *menu)
{
    if (event.x >= menu->play_button_position.x - 100 && event.x <=
        menu->play_button_position.x + 270 && event.y >=
        menu->play_button_position.y && event.y <=
        menu->play_button_position.y + 100) {
        global->game_status = 1;
    }
    if (event.x >= menu->quit_button_position.x - 100 && event.x <=
        menu->quit_button_position.x + 270 && event.y >=
        menu->quit_button_position.y && event.y <=
        menu->quit_button_position.y + 100) {
        sfRenderWindow_close(global->window);
    }
}

void check_menu_status(window_t *global, menu_t *menu)
{
    if (menu->menu_status == 1) {
        click_button_menu(global, global->event->mouseButton, menu);
    }
}
