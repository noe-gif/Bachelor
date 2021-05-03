/*
** EPITECH PROJECT, 2020
** menu_sprite
** File description:
** defender
*/

#include "prototypes.h"
#include "defender.h"
#include <stdlib.h>

void create_menu_transition(menu_t *menu)
{
    char *png = "resources/pictures/menu/MENU_TRANSI1.png";

    menu->menu_transition = malloc(sizeof(sprite_t));
    menu->menu_transition->sprite = sfSprite_create();
    menu->menu_transition->texture =
    create_texture(menu->menu_transition->texture, png);
    menu->menu_transition->rect =
    create_size_rect(menu->menu_transition->rect, 1200, 675);
    menu->menu_transition->rect =
    create_side_rect(menu->menu_transition->rect, 5400, 4800);
    menu->menu_transition->position =
    create_position(menu->menu_transition->position, 0, 0);
    sfSprite_setTexture(menu->menu_transition->sprite,
    menu->menu_transition->texture, sfFalse);
}

void create_menu_transition_2(menu_t *menu)
{
    char *png = "resources/pictures/menu/MENU_TRANSI2.png";

    menu->menu_transition2 = malloc(sizeof(sprite_t));
    menu->menu_transition2->sprite = sfSprite_create();
    menu->menu_transition2->texture =
    create_texture(menu->menu_transition2->texture, png);
    menu->menu_transition2->rect =
    create_size_rect(menu->menu_transition2->rect, 1200, 675);
    menu->menu_transition2->rect =
    create_side_rect(menu->menu_transition2->rect, 5400, 6000);
    menu->menu_transition2->position =
    create_position(menu->menu_transition2->position, 0, 0);
    sfSprite_setTexture(menu->menu_transition2->sprite,
    menu->menu_transition2->texture, sfFalse);
}

void create_menu_title_effect(menu_t *menu)
{
    char *png = "resources/pictures/menu/TITLE_EFFECT.png";

    menu->menu_title_effect = malloc(sizeof(sprite_t));
    menu->menu_title_effect->sprite = sfSprite_create();
    menu->menu_title_effect->texture =
    create_texture(menu->menu_title_effect->texture, png);
    menu->menu_title_effect->rect =
    create_size_rect(menu->menu_title_effect->rect, 450, 450);
    menu->menu_title_effect->rect =
    create_side_rect(menu->menu_title_effect->rect, 0, 0);
    menu->menu_title_effect->position =
    create_position(menu->menu_title_effect->position, 340, 350);
    sfSprite_setTexture(menu->menu_title_effect->sprite,
    menu->menu_title_effect->texture, sfFalse);
}

void create_menu_smoke(menu_t *menu)
{
    char *png = "resources/pictures/menu/SMOKE.png";

    menu->menu_smoke = malloc(sizeof(sprite_t));
    menu->menu_smoke->sprite = sfSprite_create();
    menu->menu_smoke->texture =
    create_texture(menu->menu_smoke->texture, png);
    menu->menu_smoke->rect =
    create_size_rect(menu->menu_smoke->rect, 1200, 675);
    menu->menu_smoke->rect =
    create_side_rect(menu->menu_smoke->rect, 0, 0);
    menu->menu_smoke->position =
    create_position(menu->menu_smoke->position, 0, 0);
    sfSprite_setTexture(menu->menu_smoke->sprite,
    menu->menu_smoke->texture, sfFalse);
}
