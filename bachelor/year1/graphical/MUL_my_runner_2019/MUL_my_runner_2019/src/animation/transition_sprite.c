/*
** EPITECH PROJECT, 2019
** transition
** File description:
** runner
*/

#include "../../include/runner.h"
#include <stdlib.h>

void create_transition1(menu_t *menu)
{
    char *png = "resources/pictures/Wave.png";
    int top = 0;
    int left = 0;
    int width = 1200;
    int height = 731;
    int posX = 0;
    int posY = 0;

    menu->transition1 = malloc(sizeof(sprite_t));
    menu->transition1->sprite = create_sprite(menu->transition1->sprite);
    menu->transition1->texture =
        create_texture(menu->transition1->texture, png);
    menu->transition1->rect = create_rect(menu->transition1->rect,
    top, left, width, height);
    menu->transition1->position =
        create_position(menu->transition1->position, posX, posY);
    sfSprite_setTexture(menu->transition1->sprite,
                        menu->transition1->texture, sfFalse);
    sfSprite_setPosition(menu->transition1->sprite,
    menu->transition1->position);
}

void anime_transition1(menu_t *menu)
{
    menu->transition1->rect.left += 1200;
    if (menu->transition1->rect.left > 4800) {
        menu->transition1->rect.left = 0;
        menu->transition1->rect.top += 731;
    }
    if (menu->transition1->rect.top >= 2924 &&
        menu->transition1->rect.left > 4800) {
        menu->transition1->rect.width = 0;
        menu->transition1->rect.height = 0;
    }
}

void create_button(menu_t *menu)
{
    char *png = "resources/pictures/button.png";
    int top = 0;
    int left = 0;
    int width = 564;
    int height = 423;
    int posX = -50;
    int posY = 70;

    menu->button = malloc(sizeof(sprite_t));
    menu->button->sprite = create_sprite(menu->button->sprite);
    menu->button->texture = create_texture(menu->button->texture, png);
    menu->button->rect = create_rect(menu->button->rect,
    top, left, width, height);
    menu->button->position =
        create_position(menu->button->position, posX, posY);
    sfSprite_setTexture(menu->button->sprite,
                        menu->button->texture, sfFalse);
    sfSprite_setPosition(menu->button->sprite, menu->button->position);
}

void create_button2(menu_t *menu)
{
    char *png = "resources/pictures/button.png";
    int top = 0;
    int left = 0;
    int width = 564;
    int height = 423;
    int posX = -50;
    int posY = 300;

    menu->button2 = malloc(sizeof(sprite_t));
    menu->button2->sprite = create_sprite(menu->button2->sprite);
    menu->button2->texture = create_texture(menu->button2->texture, png);
    menu->button2->rect = create_rect(menu->button2->rect,
    top, left, width, height);
    menu->button2->position =
        create_position(menu->button2->position, posX, posY);
    sfSprite_setTexture(menu->button2->sprite,
                        menu->button2->texture, sfFalse);
    sfSprite_setPosition(menu->button2->sprite, menu->button2->position);
    sfSprite_setScale(menu->button2->sprite, menu->button2->scale);
}
