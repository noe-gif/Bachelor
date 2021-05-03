/*
** EPITECH PROJECT, 2020
** menu_sprite
** File description:
** defender
*/

#include "prototypes.h"
#include "defender.h"
#include <stdlib.h>

void create_menu_mute_button(menu_t *menu)
{
    char *png = "resources/pictures/menu/BUTTON2.png";

    menu->mute_scale.x = 2.2;
    menu->mute_scale.y = 2.2;
    menu->mute_button = malloc(sizeof(sprite_t));
    menu->mute_button->sprite = sfSprite_create();
    menu->mute_button->texture =
    create_texture(menu->mute_button->texture, png);
    menu->mute_button->rect =
    create_size_rect(menu->mute_button->rect, 123, 50);
    menu->mute_button->rect = create_side_rect(menu->mute_button->rect, 12, 0);
    sfSprite_setScale(menu->mute_button->sprite, menu->mute_scale);
    menu->mute_button->position =
    create_position(menu->mute_button->position, 435, 300);
    sfSprite_setTexture(menu->mute_button->sprite,
    menu->mute_button->texture, sfFalse);
}

void create_menu_esc_button(menu_t *menu)
{
    char *png = "resources/pictures/menu/BUTTON2.png";

    menu->esc_scale.x = 2.2;
    menu->esc_scale.y = 2.2;
    menu->esc_button = malloc(sizeof(sprite_t));
    menu->esc_button->sprite = sfSprite_create();
    menu->esc_button->texture = create_texture(menu->esc_button->texture, png);
    menu->esc_button->rect = create_size_rect(menu->esc_button->rect, 100, 70);
    menu->esc_button->rect = create_side_rect(menu->esc_button->rect, 0, 120);
    sfSprite_setScale(menu->esc_button->sprite, menu->esc_scale);
    menu->esc_button->position =
    create_position(menu->esc_button->position, 480, 120);
    sfSprite_setTexture(menu->esc_button->sprite,
    menu->esc_button->texture, sfFalse);
}

void create_menu_home_button(menu_t *menu)
{
    char *png = "resources/pictures/menu/BUTTON2.png";

    menu->home_scale.x = 1;
    menu->home_scale.y = 1;
    menu->home_button = malloc(sizeof(sprite_t));
    menu->home_button->sprite = sfSprite_create();
    menu->home_button->texture =
    create_texture(menu->home_button->texture, png);
    menu->home_button->rect = create_size_rect(menu->home_button->rect, 50, 50);
    menu->home_button->rect =
    create_side_rect(menu->home_button->rect, 80, 230);
    sfSprite_setScale(menu->home_button->sprite, menu->home_scale);
    menu->home_button->position =
    create_position(menu->home_button->position, 20, 20);
    sfSprite_setTexture(menu->home_button->sprite,
    menu->home_button->texture, sfFalse);
}

void create_menu_mute_logo(menu_t *menu)
{
    char *png = "resources/pictures/menu/MUTE.png";

    menu->mute_logo_scale.x = 0.1;
    menu->mute_logo_scale.y = 0.1;
    menu->mute_logo = malloc(sizeof(sprite_t));
    menu->mute_logo->sprite = sfSprite_create();
    menu->mute_logo->texture =
    create_texture(menu->mute_logo->texture, png);
    menu->mute_logo->rect = create_size_rect(menu->mute_logo->rect, 1000, 1000);
    menu->mute_logo->rect =
    create_side_rect(menu->mute_logo->rect, 0, 0);
    sfSprite_setScale(menu->mute_logo->sprite, menu->home_scale);
    menu->mute_logo->position =
        create_position(menu->mute_logo->position, 60, 20);
    sfSprite_setTexture(menu->mute_logo->sprite,
    menu->mute_logo->texture, sfFalse);
}
