/*
** EPITECH PROJECT, 2020
** menu_sprite
** File description:
** defender
*/

#include "prototypes.h"
#include "defender.h"
#include <stdlib.h>

void create_hard_map(window_t *global)
{
    char *png = "resources/pictures/map/HARDMAP.png";

    global->game_management->hardmap = malloc(sizeof(sprite_t));
    global->game_management->hardmap->sprite = sfSprite_create();
    global->game_management->hardmap->texture =
    create_texture(global->game_management->hardmap->texture, png);
    global->game_management->hardmap->rect =
    create_size_rect(global->game_management->
    hardmap->rect, 1400, 1100);
    global->game_management->hardmap->rect =
    create_side_rect(global->game_management->hardmap->rect, 0, 0);
    global->game_management->hardmap->position =
    create_position(global->
    game_management->hardmap->position, 0, 0);
    sfSprite_setTexture(global->game_management->hardmap->sprite,
    global->game_management->hardmap->texture, sfFalse);
}

void create_transition3(window_t *global)
{
    char *png = "resources/pictures/menu/GAME_TRANSI.png";

    global->game_management->transition3 = malloc(sizeof(sprite_t));
    global->game_management->transition3->sprite = sfSprite_create();
    global->game_management->transition3->texture =
    create_texture(global->game_management->transition3->texture, png);
    global->game_management->transition3->rect =
    create_size_rect(global->game_management->transition3->rect, 1200, 675);
    global->game_management->transition3->rect =
    create_side_rect(global->game_management->transition3->rect, 3375, 9600);
    global->game_management->transition3->position =
    create_position(global->game_management->transition3->position, 0, 0);
    sfSprite_setTexture(global->game_management->transition3->sprite,
    global->game_management->transition3->texture, sfFalse);
}

void create_turret_monkey_simple_button(window_t *global)
{
    char *png = "resources/pictures/map/BUTTON_TURRETS.png";

    global->game_management->turret_monkey_simple_button =
    malloc(sizeof(sprite_t));
    global->game_management->turret_monkey_simple_button->sprite =
    sfSprite_create();
    global->game_management->turret_monkey_simple_button->texture =
    create_texture(global->game_management->
    turret_monkey_simple_button->texture, png);
    global->game_management->turret_monkey_simple_button->rect =
    create_size_rect(global->game_management->
    turret_monkey_simple_button->rect, 250, 205);
    global->game_management->turret_monkey_simple_button->rect =
    create_side_rect(global->game_management->
    turret_monkey_simple_button->rect, 0, 0);
    global->game_management->turret_monkey_simple_button->position =
    create_position(global->game_management->
    turret_monkey_simple_button->position, -137, 0);
    sfSprite_setTexture(global->game_management->
    turret_monkey_simple_button->sprite,
    global->game_management->turret_monkey_simple_button->texture, sfFalse);
}

void create_turret_monkey_sorcer_button(window_t *global)
{
    char *png = "resources/pictures/map/BUTTON_TURRETS.png";

    global->game_management->turret_monkey_sorcer_button =
    malloc(sizeof(sprite_t));
    global->game_management->
    turret_monkey_sorcer_button->sprite = sfSprite_create();
    global->game_management->turret_monkey_sorcer_button->texture =
    create_texture(global->game_management->
    turret_monkey_sorcer_button->texture, png);
    global->game_management->turret_monkey_sorcer_button->rect =
    create_size_rect(global->game_management->
    turret_monkey_sorcer_button->rect, 250, 90);
    global->game_management->turret_monkey_sorcer_button->rect =
    create_side_rect(global->game_management->
    turret_monkey_sorcer_button->rect, 200, 37);
    global->game_management->turret_monkey_sorcer_button->position =
    create_position(global->game_management->
    turret_monkey_sorcer_button->position, -100, 200);
    sfSprite_setTexture(global->game_management->
    turret_monkey_sorcer_button->sprite,
    global->game_management->turret_monkey_sorcer_button->texture, sfFalse);
}

void create_turret_monkey_sniper_button(window_t *global)
{
    char *png = "resources/pictures/map/BUTTON_TURRETS.png";

    global->game_management->turret_monkey_sniper_button =
    malloc(sizeof(sprite_t));
    global->game_management->turret_monkey_sniper_button->sprite =
    sfSprite_create();
    global->game_management->turret_monkey_sniper_button->texture =
    create_texture(global->game_management->
    turret_monkey_sniper_button->texture, png);
    global->game_management->turret_monkey_sniper_button->rect =
    create_size_rect(global->game_management->
    turret_monkey_sniper_button->rect, 250, 90);
    global->game_management->turret_monkey_sniper_button->rect =
    create_side_rect(global->game_management->
    turret_monkey_sniper_button->rect, 290, 37);
    global->game_management->turret_monkey_sniper_button->position =
    create_position(global->game_management->
    turret_monkey_sniper_button->position, -100, 290);
    sfSprite_setTexture(global->game_management->
    turret_monkey_sniper_button->sprite,
    global->game_management->turret_monkey_sniper_button->texture, sfFalse);
}
