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
#include <SFML/Window.h>
#include <SFML/System/Vector2.h>
#include <SFML/Audio.h>
#include <SFML/Audio/Export.h>
#include <SFML/Audio/SoundStatus.h>
#include <SFML/Audio/Types.h>

void if_touched_hardmap_hitbox(window_t *global)
{
    if (global->event->type == sfEvtMouseButtonPressed) {
        global->map_selection_management->hardmap_chosen_event = 1;
        global->map_selection_management->start_play_hardmap = 1;
    }
    global->map_selection_management->map_selection_hardmap_icon->rect.left
        = 1003;
}

void is_touched_hardmap_hitbox(window_t *global)
{
    if (((sfMouse_getPositionRenderWindow(global->window).x >=
    global->map_selection_management->map_selection_hardmap_icon->position.x
    + 340) &&
    (sfMouse_getPositionRenderWindow(global->window).x <=
    global->map_selection_management->map_selection_hardmap_icon->position.x
    + 700)) &&
        ((sfMouse_getPositionRenderWindow(global->window).y >=
    global->map_selection_management->map_selection_hardmap_icon->position.y
    + 375)) &&
        (sfMouse_getPositionRenderWindow(global->window).y <=
    global->map_selection_management->map_selection_hardmap_icon->position.y
    + 670))
        if_touched_hardmap_hitbox(global);
    else
        global->map_selection_management->
    map_selection_hardmap_icon->rect.left = 0;
}

void if_touched_right_arrow_hitbox(window_t *global)
{
    if (global->event->type == sfEvtMouseButtonPressed) {
        global->map_selection_management->
            map_selection_hardmap_icon->rect.top = 1215;
    }
    global->map_selection_management->map_selection_right_arrow->rect.top
        = 575;
}

void is_touched_right_arrow_hitbox(window_t *global, sfEvent event)
{
    if (((sfMouse_getPositionRenderWindow(global->window).x >=
    global->map_selection_management->
    map_selection_right_arrow->position.x) &&
    (sfMouse_getPositionRenderWindow(global->window).x <=
    global->map_selection_management->
    map_selection_right_arrow->position.x + 100)) &&
        ((sfMouse_getPositionRenderWindow(global->window).y >=
    global->map_selection_management->
    map_selection_right_arrow->position.y)) &&
        (sfMouse_getPositionRenderWindow(global->window).y <=
    global->map_selection_management->
    map_selection_right_arrow->position.y + 50))
        if_touched_right_arrow_hitbox(global);
    else
        global->map_selection_management->map_selection_right_arrow->rect.top
            = 260;
    if (event.key.code == sfKeyRight)
        global->map_selection_management->map_selection_hardmap_icon->rect.top
        = 1215;
}

void is_touched_left_arrow_hitbox(window_t *global, sfEvent event )
{
    if (((sfMouse_getPositionRenderWindow(global->window).x >=
    global->map_selection_management->map_selection_left_arrow->position.x) &&
    (sfMouse_getPositionRenderWindow(global->window).x <=
    global->map_selection_management->map_selection_left_arrow->position.x
    + 100)) && ((sfMouse_getPositionRenderWindow(global->window).y >=
    global->map_selection_management->map_selection_left_arrow->position.y)) &&
        (sfMouse_getPositionRenderWindow(global->window).y <=
    global->map_selection_management->map_selection_left_arrow->position.y
    + 50)) {
        if (global->event->type == sfEvtMouseButtonPressed)
            global->map_selection_management->
    map_selection_hardmap_icon->rect.top = 500;
        global->map_selection_management->
    map_selection_left_arrow->rect.top = 575;
    }
    else
        global->map_selection_management->
    map_selection_left_arrow->rect.top = 260;
    if (event.key.code == sfKeyLeft)
        global->map_selection_management->
    map_selection_hardmap_icon->rect.top = 500;
}
