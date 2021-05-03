/*
** EPITECH PROJECT, 2020
** menu_sprite
** File description:
** defender
*/

#include "prototypes.h"
#include "defender.h"
#include <stdlib.h>

void create_turret_monkey_sniper(window_t *global)
{
    char *png = "resources/pictures/monkeys/SNIPER.png";

    global->game_management->turret_monkey_sniper =
    malloc(sizeof(sprite_t));
    global->game_management->turret_monkey_sniper->sprite =
    sfSprite_create();
    global->game_management->turret_monkey_sniper->texture =
    create_texture(global->game_management->
    turret_monkey_sniper->texture, png);
    global->game_management->turret_monkey_sniper->rect =
    create_size_rect(global->game_management->
    turret_monkey_sniper->rect, 100, 300);
    global->game_management->turret_monkey_sniper->rect =
    create_side_rect(global->game_management->
    turret_monkey_sniper->rect, 0, 0);
    sniper_complete(global);
}

void boat_complete(window_t *global)
{
    global->game_management->turret_monkey_boat->position =
    create_position(global->game_management->
    turret_monkey_boat->position,
    sfMouse_getPositionRenderWindow(global->window).x,
    sfMouse_getPositionRenderWindow(global->window).y);
    sfSprite_setTexture(global->game_management->
    turret_monkey_boat->sprite,
    global->game_management->turret_monkey_boat->texture, sfFalse);
}

void create_turret_monkey_boat(window_t *global)
{
    char *png = "resources/pictures/monkeys/BOAT1.png";

    global->game_management->turret_monkey_boat =
    malloc(sizeof(sprite_t));
    global->game_management->turret_monkey_boat->sprite =
    sfSprite_create();
    global->game_management->turret_monkey_boat->texture =
    create_texture(global->game_management->
    turret_monkey_boat->texture, png);
    global->game_management->turret_monkey_boat->rect =
    create_size_rect(global->game_management->
    turret_monkey_boat->rect, 150, 350);
    global->game_management->turret_monkey_boat->rect =
    create_side_rect(global->game_management->
    turret_monkey_boat->rect, 0, 0);
    boat_complete(global);
}

void ice_complete(window_t *global)
{
    global->game_management->turret_monkey_ice->position =
    create_position(global->game_management->
    turret_monkey_ice->position,
    sfMouse_getPositionRenderWindow(global->window).x,
    sfMouse_getPositionRenderWindow(global->window).y);
    sfSprite_setTexture(global->game_management->
    turret_monkey_ice->sprite,
    global->game_management->turret_monkey_ice->texture, sfFalse);
}

void create_turret_monkey_ice(window_t *global)
{
    char *png = "resources/pictures/monkeys/ICE.png";

    global->game_management->turret_monkey_ice =
    malloc(sizeof(sprite_t));
    global->game_management->turret_monkey_ice->sprite =
    sfSprite_create();
    global->game_management->turret_monkey_ice->texture =
    create_texture(global->game_management->
    turret_monkey_ice->texture, png);
    global->game_management->turret_monkey_ice->rect =
    create_size_rect(global->game_management->
    turret_monkey_ice->rect, 85, 350);
    global->game_management->turret_monkey_ice->rect =
    create_side_rect(global->game_management->
    turret_monkey_ice->rect, 120, 0);
    ice_complete(global);
}
