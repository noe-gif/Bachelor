/*
** EPITECH PROJECT, 2020
** position
** File description:
** menu_sprites
*/

#include "prototypes.h"
#include "defender.h"

void set_map_selection_scale(window_t *global)
{
    sfSprite_setScale(global->map_selection_management->
    map_selection_hardmap_icon->sprite,
    global->map_selection_management->hardmap_icon_scale);
    sfSprite_setScale(global->map_selection_management->
    map_selection_right_arrow->sprite,
    global->map_selection_management->right_arrow_scale);
    sfSprite_setScale(global->map_selection_management->
    map_selection_left_arrow->sprite,
    global->map_selection_management->left_arrow_scale);
}

void set_map_selection_positions(window_t *global)
{
    sfSprite_setPosition(global->map_selection_management->
    map_selection_background->sprite,
    global->map_selection_management->map_selection_background->position);
    sfSprite_setPosition(global->map_selection_management->
    map_selection_hardmap_icon->sprite,
    global->map_selection_management->map_selection_hardmap_icon->position);
    sfSprite_setPosition(global->map_selection_management->
    map_selection_right_arrow->sprite,
    global->map_selection_management->map_selection_right_arrow->position);
    sfSprite_setPosition(global->map_selection_management->
    map_selection_left_arrow->sprite,
    global->map_selection_management->map_selection_left_arrow->position);
}

void set_map_selection_rect(window_t *global)
{
    sfSprite_setTextureRect(global->map_selection_management->
    map_selection_background->sprite,
    global->map_selection_management->map_selection_background->rect);
    sfSprite_setTextureRect(global->map_selection_management->
    map_selection_hardmap_icon->sprite,
    global->map_selection_management->map_selection_hardmap_icon->rect);
    sfSprite_setTextureRect(global->map_selection_management->
    map_selection_right_arrow->sprite,
    global->map_selection_management->map_selection_right_arrow->rect);
    sfSprite_setTextureRect(global->map_selection_management->
    map_selection_left_arrow->sprite,
    global->map_selection_management->map_selection_left_arrow->rect);
    set_map_selection_scale(global);
}
