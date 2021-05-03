/*
** EPITECH PROJECT, 2019
** event
** File description:
** runner
*/

#include "../../include/runner.h"

void event_loop(window_t *global, menu_t *menu)
{
    sfEvent event;

    global->event = &event;
    menu->menu_status = 0;
    while (sfRenderWindow_pollEvent(global->window, global->event)) {
        if (global->event->type == sfEvtClosed)
            sfRenderWindow_close(global->window);
        if (global->event->type == sfEvtMouseButtonPressed)
            menu->menu_status = 1;
    }
    check_menu_status(global, menu);
}

void left_deplacement(window_t *global)
{
    global->character->position.x = global->character->position.x - 10;
}

void right_deplacement(window_t *global)
{
    global->character->position.x = global->character->position.x + 10;
}
