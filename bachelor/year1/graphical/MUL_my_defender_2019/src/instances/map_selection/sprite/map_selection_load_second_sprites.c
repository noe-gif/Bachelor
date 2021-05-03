/*
** EPITECH PROJECT, 2020
** menu_sprite
** File description:
** defender
*/

#include "prototypes.h"
#include "defender.h"
#include <stdlib.h>

void background(window_t *global)
{
    global->map_selection_management->map_selection_background->position =
    create_position(global->map_selection_management->
    map_selection_background->position, 0, 0);
    sfSprite_setTexture(global->map_selection_management->
    map_selection_background->sprite,
    global->map_selection_management->
    map_selection_background->texture, sfFalse);
}

void hardmap_icon(window_t *global)
{
    global->map_selection_management->map_selection_hardmap_icon->position =
    create_position(global->map_selection_management->
    map_selection_hardmap_icon->position, 70, -170);
    sfSprite_setTexture(global->map_selection_management->
    map_selection_hardmap_icon->sprite,
    global->map_selection_management->
    map_selection_hardmap_icon->texture, sfFalse);
}

void right_arrow(window_t *global)
{
    sfSprite_setScale(global->map_selection_management->
    map_selection_right_arrow->sprite,
    global->map_selection_management->right_arrow_scale);
    global->map_selection_management->map_selection_right_arrow->position =
    create_position(global->map_selection_management->
    map_selection_right_arrow->position, 1080, 300);
    sfSprite_setTexture(global->map_selection_management->
    map_selection_right_arrow->sprite,
    global->map_selection_management->
    map_selection_right_arrow->texture, sfFalse);
}

void left_arrow(window_t *global)
{
    sfSprite_setScale(global->map_selection_management->
    map_selection_left_arrow->sprite,
    global->map_selection_management->left_arrow_scale);
    global->map_selection_management->map_selection_left_arrow->position =
    create_position(global->map_selection_management->
    map_selection_left_arrow->position, -10, 300);
    sfSprite_setTexture(global->map_selection_management->
    map_selection_left_arrow->sprite,
    global->map_selection_management->
    map_selection_left_arrow->texture, sfFalse);
}
