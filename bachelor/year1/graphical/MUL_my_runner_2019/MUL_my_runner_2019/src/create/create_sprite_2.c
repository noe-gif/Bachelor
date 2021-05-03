/*
** EPITECH PROJECT, 2019
** runner
** File description:
** create_sprite
*/

#include "../../include/runner.h"
#include <stdlib.h>

void create_foret7(window_t *global)
{
    char *png = "resources/pictures/foret7.png";
    int top = 0;
    int left = 0;
    int width = 2600;
    int height = 731;
    int posX = 0;
    int posY = 0;

    global->foret7 = malloc(sizeof(sprite_t));
    global->foret7->sprite = create_sprite(global->foret7->sprite);
    global->foret7->texture = create_texture(global->foret7->texture, png);
    global->foret7->rect = create_rect(global->foret7->rect,
    top, left, width, height);
    global->foret7->position =
        create_position(global->foret7->position, posX, posY);
    sfSprite_setTexture(global->foret7->sprite,
                        global->foret7->texture, sfFalse);
    sfSprite_setPosition(global->foret7->sprite, global->foret7->position);
}

void create_menu1(menu_t *menu)
{
    char *png = "resources/pictures/menu1.png";
    int top = 0;
    int left = 0;
    int width = 2600;
    int height = 731;
    int posX = 0;
    int posY = 0;

    menu->menu1 = malloc(sizeof(sprite_t));
    menu->menu1->sprite = create_sprite(menu->menu1->sprite);
    menu->menu1->texture = create_texture(menu->menu1->texture, png);
    menu->menu1->rect = create_rect(menu->menu1->rect,
                                    top, left, width, height);
    menu->menu1->position =
        create_position(menu->menu1->position, posX, posY);
    sfSprite_setTexture(menu->menu1->sprite,
                        menu->menu1->texture, sfFalse);
    sfSprite_setPosition(menu->menu1->sprite, menu->menu1->position);
}

void create_menu2(menu_t *menu)
{
    char *png = "resources/pictures/menu2.png";
    int top = 0;
    int left = 0;
    int width = 2600;
    int height = 731;
    int posX = 0;
    int posY = 0;

    menu->menu2 = malloc(sizeof(sprite_t));
    menu->menu2->sprite = create_sprite(menu->menu2->sprite);
    menu->menu2->texture = create_texture(menu->menu2->texture, png);
    menu->menu2->rect = create_rect(menu->menu2->rect,
                                    top, left, width, height);
    menu->menu2->position =
        create_position(menu->menu2->position, posX, posY);
    sfSprite_setTexture(menu->menu2->sprite,
                        menu->menu2->texture, sfFalse);
    sfSprite_setPosition(menu->menu2->sprite, menu->menu2->position);
}

void create_menu3(menu_t *menu)
{
    char *png = "resources/pictures/menu3.png";
    int top = 0;
    int left = 0;
    int width = 2600;
    int height = 731;
    int posX = 0;
    int posY = 0;

    menu->menu3 = malloc(sizeof(sprite_t));
    menu->menu3->sprite = create_sprite(menu->menu3->sprite);
    menu->menu3->texture = create_texture(menu->menu3->texture, png);
    menu->menu3->rect = create_rect(menu->menu3->rect,
                                    top, left, width, height);
    menu->menu3->position =
        create_position(menu->menu3->position, posX, posY);
    sfSprite_setTexture(menu->menu3->sprite,
                        menu->menu3->texture, sfFalse);
    sfSprite_setPosition(menu->menu3->sprite, menu->menu3->position);
}

void create_menu4(menu_t *menu)
{
    char *png = "resources/pictures/menu4.png";
    int top = 0;
    int left = 0;
    int width = 2600;
    int height = 731;
    int posX = 0;
    int posY = 0;

    menu->menu4 = malloc(sizeof(sprite_t));
    menu->menu4->sprite = create_sprite(menu->menu4->sprite);
    menu->menu4->texture = create_texture(menu->menu4->texture, png);
    menu->menu4->rect = create_rect(menu->menu4->rect,
                                    top, left, width, height);
    menu->menu4->position =
        create_position(menu->menu4->position, posX, posY);
    sfSprite_setTexture(menu->menu4->sprite,
                        menu->menu4->texture, sfFalse);
    sfSprite_setPosition(menu->menu4->sprite, menu->menu4->position);
}
