/*
** EPITECH PROJECT, 2020
** menu_sprite
** File description:
** defender
*/

#include "prototypes.h"
#include "defender.h"
#include <stdlib.h>

void create_menu_background(menu_t *menu)
{
    char *png = "resources/pictures/menu/bloons.png";

    menu->menu_background = malloc(sizeof(sprite_t));
    menu->menu_background->sprite = sfSprite_create();
    menu->menu_background->texture =
    create_texture(menu->menu_background->texture, png);
    menu->menu_background->rect =
    create_size_rect(menu->menu_background->rect, 1200, 675);
    menu->menu_background->rect =
    create_side_rect(menu->menu_background->rect, 0, 0);
    menu->menu_background->position =
    create_position(menu->menu_background->position, 0, 0);
    sfSprite_setTexture(menu->menu_background->sprite,
    menu->menu_background->texture, sfFalse);
}

void create_menu_start_button(menu_t *menu)
{
    char *png = "resources/pictures/menu/BUTON.png";

    menu->start_button = malloc(sizeof(sprite_t));
    menu->start_button->sprite = sfSprite_create();
    menu->start_button->texture =
    create_texture(menu->start_button->texture, png);
    menu->start_button->rect =
    create_size_rect(menu->start_button->rect, 400, 300);
    menu->start_button->rect =
    create_side_rect(menu->start_button->rect, 2600, 0);
    menu->start_button->position =
    create_position(menu->start_button->position, 300, 406);
    sfSprite_setTexture(menu->start_button->sprite,
    menu->start_button->texture, sfFalse);
}

void create_menu_param_button(menu_t *menu)
{
    char *png = "resources/pictures/menu/BUTTON2.png";

    menu->param_button = malloc(sizeof(sprite_t));
    menu->param_button->sprite = sfSprite_create();
    menu->param_button->texture =
    create_texture(menu->param_button->texture, png);
    menu->param_button->rect =
    create_size_rect(menu->param_button->rect, 60, 50);
    menu->param_button->rect =
    create_side_rect(menu->param_button->rect, 148, 448);
    menu->param_button->position =
    create_position(menu->param_button->position, 1130, 15);
    sfSprite_setTexture(menu->param_button->sprite,
    menu->param_button->texture, sfFalse);
}

void create_param_background(menu_t *menu)
{
    char *png = "resources/pictures/menu/GREY_PARAM_BACKGROUND.png";

    menu->param_background = malloc(sizeof(sprite_t));
    menu->param_background->sprite = sfSprite_create();
    menu->param_background->texture =
    create_texture(menu->param_background->texture, png);
    menu->param_background->rect =
    create_size_rect(menu->param_background->rect, 1300, 700);
    menu->param_background->rect =
    create_side_rect(menu->param_background->rect, 0, 0);
    menu->param_background->position =
    create_position(menu->param_background->position, 0, 0);
    sfSprite_setTexture(menu->param_background->sprite,
    menu->param_background->texture, sfFalse);
}

void create_menu_quit_button(menu_t *menu)
{
    char *png = "resources/pictures/menu/BUTTON2.png";

    menu->quit_scale.x = 2.2;
    menu->quit_scale.y = 2.2;
    menu->quit_button = malloc(sizeof(sprite_t));
    menu->quit_button->sprite = sfSprite_create();
    menu->quit_button->texture =
    create_texture(menu->quit_button->texture, png);
    menu->quit_button->rect =
    create_size_rect(menu->quit_button->rect, 110, 50);
    menu->quit_button->rect =
    create_side_rect(menu->quit_button->rect, 12, 0);
    sfSprite_setScale(menu->quit_button->sprite, menu->quit_scale);
    menu->quit_button->position =
    create_position(menu->quit_button->position, 470, 450);
    sfSprite_setTexture(menu->quit_button->sprite,
    menu->quit_button->texture, sfFalse);
}
