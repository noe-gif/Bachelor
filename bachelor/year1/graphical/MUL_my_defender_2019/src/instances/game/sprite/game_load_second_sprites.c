/*
** EPITECH PROJECT, 2020
** menu_sprite
** File description:
** defender
*/

#include "prototypes.h"
#include "defender.h"
#include <stdlib.h>

void create_turret_monkey_boat_button(window_t *global)
{
    char *png = "resources/pictures/map/BUTTON_TURRETS.png";

    global->game_management->turret_monkey_boat_button =
    malloc(sizeof(sprite_t));
    global->game_management->turret_monkey_boat_button->sprite =
    sfSprite_create();
    global->game_management->turret_monkey_boat_button->texture =
    create_texture(global->game_management->
    turret_monkey_boat_button->texture, png);
    global->game_management->turret_monkey_boat_button->rect =
    create_size_rect(global->game_management->
    turret_monkey_boat_button->rect, 250, 90);
    global->game_management->turret_monkey_boat_button->rect =
    create_side_rect(global->game_management->
    turret_monkey_boat_button->rect, 375, 37);
    global->game_management->turret_monkey_boat_button->position =
    create_position(global->game_management->
    turret_monkey_boat_button->position, -100, 375);
    sfSprite_setTexture(global->game_management->
    turret_monkey_boat_button->sprite,
    global->game_management->turret_monkey_boat_button->texture, sfFalse);
}

void create_turret_monkey_ice_button(window_t *global)
{
    char *png = "resources/pictures/map/BUTTON_TURRETS.png";

    global->game_management->turret_monkey_ice_button =
    malloc(sizeof(sprite_t));
    global->game_management->turret_monkey_ice_button->sprite =
    sfSprite_create();
    global->game_management->turret_monkey_ice_button->texture =
    create_texture(global->game_management->
    turret_monkey_ice_button->texture, png);
    global->game_management->turret_monkey_ice_button->rect =
    create_size_rect(global->game_management->
    turret_monkey_ice_button->rect, 250, 90);
    global->game_management->turret_monkey_ice_button->rect =
    create_side_rect(global->game_management->
    turret_monkey_ice_button->rect, 468, 50);
    global->game_management->turret_monkey_ice_button->position =
    create_position(global->game_management->
    turret_monkey_ice_button->position, -100, 470);
    sfSprite_setTexture(global->game_management->
    turret_monkey_ice_button->sprite,
    global->game_management->turret_monkey_ice_button->texture, sfFalse);
}

void create_turret_monkey_simple(window_t *global)
{
    char *png = "resources/pictures/monkeys/MONKEY2.png";

    global->game_management->turret_monkey_simple =
    malloc(sizeof(sprite_t));
    global->game_management->turret_monkey_simple->sprite = sfSprite_create();
    global->game_management->turret_monkey_simple->texture =
    create_texture(global->game_management->
    turret_monkey_simple->texture, png);
    global->game_management->turret_monkey_simple->rect =
    create_size_rect(global->game_management->
    turret_monkey_simple->rect, 50, 300);
    global->game_management->turret_monkey_simple->rect =
    create_side_rect(global->game_management->
    turret_monkey_simple->rect, 0, 0);
    global->game_management->turret_monkey_simple->position =
    create_position(global->game_management->
    turret_monkey_simple->position,
    sfMouse_getPositionRenderWindow(global->window).x,
    sfMouse_getPositionRenderWindow(global->window).y);
    sfSprite_setTexture(global->game_management->turret_monkey_simple->sprite,
    global->game_management->turret_monkey_simple->texture, sfFalse);
}

void create_range_circle(window_t *global)
{
    char *png = "resources/pictures/map/RANGE_TOWERS.png";

    global->game_management->range_circle = malloc(sizeof(sprite_t));
    global->game_management->range_circle->sprite = sfSprite_create();
    global->game_management->range_circle->texture =
    create_texture(global->game_management->
    range_circle->texture, png);
    global->game_management->range_circle->rect =
    create_size_rect(global->game_management->
    range_circle->rect, 320, 320);
    global->game_management->range_circle->rect =
    create_side_rect(global->game_management->
    range_circle->rect, 0, 0);
    global->game_management->range_circle->position =
    create_position(global->game_management->
    range_circle->position,
    sfMouse_getPositionRenderWindow(global->window).x,
    sfMouse_getPositionRenderWindow(global->window).y);
    sfSprite_setTexture(global->game_management->
    range_circle->sprite,
    global->game_management->range_circle->texture, sfFalse);
}
