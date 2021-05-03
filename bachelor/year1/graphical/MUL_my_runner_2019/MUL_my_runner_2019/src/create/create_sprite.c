/*
** EPITECH PROJECT, 2019
** create_sprite
** File description:
** runner
*/

#include "../../include/runner.h"
#include <stdlib.h>

void create_foret1(window_t *global)
{
    char *png = "resources/pictures/foret1.png";
    int top = 0;
    int left = 0;
    int width = 2600;
    int height = 731;
    int posX = 0;
    int posY = 0;

    global->foret1 = malloc(sizeof(sprite_t));
    global->foret1->sprite = create_sprite(global->foret1->sprite);
    global->foret1->texture = create_texture(global->foret1->texture, png);
    global->foret1->rect = create_rect(global->foret1->rect, top,
    left, width, height);
    global->foret1->position =
        create_position(global->foret1->position, posX, posY);
    sfSprite_setTexture(global->foret1->sprite,
                        global->foret1->texture, sfFalse);
}

void create_foret2(window_t *global)
{
    char *png = "resources/pictures/foret2.png";
    int top = 0;
    int left = 0;
    int width = 2600;
    int height = 731;
    int posX = 0;
    int posY = 0;

    global->foret2 = malloc(sizeof(sprite_t));
    global->foret2->sprite = create_sprite(global->foret2->sprite);
    global->foret2->texture = create_texture(global->foret2->texture, png);
    global->foret2->rect = create_rect(global->foret2->rect,
    top, left, width, height);
    global->foret2->position =
        create_position(global->foret2->position, posX, posY);
    sfSprite_setTexture(global->foret2->sprite,
                        global->foret2->texture, sfFalse);
}

void create_foret3(window_t *global)
{
    char *png = "resources/pictures/foret3.png";
    int top = 0;
    int left = 0;
    int width = 2600;
    int height = 731;
    int posX = 0;
    int posY = 0;

    global->foret3 = malloc(sizeof(sprite_t));
    global->foret3->sprite = create_sprite(global->foret3->sprite);
    global->foret3->texture = create_texture(global->foret3->texture, png);
    global->foret3->rect = create_rect(global->foret3->rect,
    top, left, width, height);
    global->foret3->position =
        create_position(global->foret3->position, posX, posY);
    sfSprite_setTexture(global->foret3->sprite,
                        global->foret3->texture, sfFalse);
}

void create_foret4(window_t *global)
{
    char *png = "resources/pictures/foret4.png";
    int top = 0;
    int left = 0;
    int width = 2600;
    int height = 731;
    int posX = 0;
    int posY = 0;

    global->foret4 = malloc(sizeof(sprite_t));
    global->foret4->sprite = create_sprite(global->foret4->sprite);
    global->foret4->texture = create_texture(global->foret4->texture, png);
    global->foret4->rect = create_rect(global->foret4->rect,
    top, left, width, height);
    global->foret4->position =
        create_position(global->foret4->position, posX, posY);
    sfSprite_setTexture(global->foret4->sprite,
                        global->foret4->texture, sfFalse);
}

void create_foret6(window_t *global)
{
    char *png = "resources/pictures/foret6.png";
    int top = 0;
    int left = 0;
    int width = 2600;
    int height = 731;
    int posX = 0;
    int posY = 0;

    global->foret6 = malloc(sizeof(sprite_t));
    global->foret6->sprite = create_sprite(global->foret6->sprite);
    global->foret6->texture = create_texture(global->foret6->texture, png);
    global->foret6->rect = create_rect(global->foret6->rect,
    top, left, width, height);
    global->foret6->position =
        create_position(global->foret6->position, posX, posY);
    sfSprite_setTexture(global->foret6->sprite,
                        global->foret6->texture, sfFalse);
}
