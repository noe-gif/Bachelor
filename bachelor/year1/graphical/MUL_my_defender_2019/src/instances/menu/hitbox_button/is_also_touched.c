/*
** EPITECH PROJECT, 2020
** hitbox_button_start
** File description:
** defender
*/

#include "defender.h"
#include "prototypes.h"
#include "my.h"
#include <SFML/Window/Export.h>
#include <SFML/Window/Types.h>
#include <SFML/System/Vector2.h>

void is_touched_home_hitbox(menu_t *menu, window_t *global)
{
    if (((sfMouse_getPositionRenderWindow(global->window).x >=
    menu->home_button->position.x + 10) &&
    (sfMouse_getPositionRenderWindow(global->window).x <=
    menu->home_button->position.x + 50)) &&
        ((sfMouse_getPositionRenderWindow(global->window).y >=
    menu->home_button->position.y - 5) &&
    (sfMouse_getPositionRenderWindow(global->window).y <=
    menu->home_button->position.y + 55))) {
        if (global->event->type ==
    sfEvtMouseButtonPressed) {
            menu->home_button->rect.left = 175;
            menu->home_event = 1;
        }
        menu->home_button->rect.left = 175;
    }
    else
        menu->home_button->rect.left = 230;
}
