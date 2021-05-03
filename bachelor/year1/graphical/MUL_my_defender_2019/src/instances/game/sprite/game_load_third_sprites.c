/*
** EPITECH PROJECT, 2020
** menu_sprite
** File description:
** defender
*/

#include "prototypes.h"
#include "defender.h"
#include <stdlib.h>

void sorcer_complete(window_t *global)
{
    global->game_management->turret_monkey_sorcer->position =
    create_position(global->game_management->
    turret_monkey_sorcer->position,
    sfMouse_getPositionRenderWindow(global->window).x,
    sfMouse_getPositionRenderWindow(global->window).y);
    sfSprite_setTexture(global->game_management->
    turret_monkey_sorcer->sprite,
    global->game_management->turret_monkey_sorcer->texture, sfFalse);
}

void create_turret_monkey_sorcer(window_t *global)
{
    char *png = "resources/pictures/monkeys/SORCER.png";

    global->game_management->turret_monkey_sorcer =
    malloc(sizeof(sprite_t));
    global->game_management->turret_monkey_sorcer->sprite =
    sfSprite_create();
    global->game_management->turret_monkey_sorcer->texture =
    create_texture(global->game_management->
    turret_monkey_sorcer->texture, png);
    global->game_management->turret_monkey_sorcer->rect =
    create_size_rect(global->game_management->
    turret_monkey_sorcer->rect, 100, 80);
    global->game_management->turret_monkey_sorcer->rect =
    create_side_rect(global->game_management->
    turret_monkey_sorcer->rect, 0, 0);
    sorcer_complete(global);
}

void sniper_complete(window_t *global)
{
    global->game_management->turret_monkey_sniper->position =
    create_position(global->game_management->
    turret_monkey_sniper->position,
    sfMouse_getPositionRenderWindow(global->window).x,
    sfMouse_getPositionRenderWindow(global->window).y);
    sfSprite_setTexture(global->game_management->
    turret_monkey_sniper->sprite,
    global->game_management->turret_monkey_sniper->texture, sfFalse);
}
