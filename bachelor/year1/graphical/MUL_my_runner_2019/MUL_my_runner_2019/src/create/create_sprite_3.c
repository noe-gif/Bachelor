/*
** EPITECH PROJECT, 2019
** sprites
** File description:
** runner
*/

#include "../../include/runner.h"
#include <stdlib.h>

void create_bat(select_player_t *select)
{
    char *png = "resources/pictures/BAT.png";
    int top = 0;
    int left = 0;
    int width = 100;
    int height = 100;
    int posX = 2300;
    int posY = 200;

    select->bat = malloc(sizeof(sprite_t));
    select->bat->sprite = create_sprite(select->bat->sprite);
    select->bat->texture = create_texture(select->bat->texture, png);
    select->bat->rect = create_rect(select->bat->rect,
                                    top, left, width, height);
    select->bat->position =
        create_position(select->bat->position, posX, posY);
    sfSprite_setTexture(select->bat->sprite,
                        select->bat->texture, sfFalse);
    sfSprite_setPosition(select->bat->sprite, select->bat->position);
}

void create_wolf(select_player_t *select)
{
    char *png = "resources/pictures/wolf.png";
    int top = 820;
    int left = 3690;
    int width = 410;
    int height = 410;
    int posX = 700;
    int posY = 325;

    select->wolf = malloc(sizeof(sprite_t));
    select->wolf->sprite = create_sprite(select->wolf->sprite);
    select->wolf->texture = create_texture(select->wolf->texture, png);
    select->wolf->rect = create_rect(select->wolf->rect,
    top, left, width, height);
    select->wolf->position =
        create_position(select->wolf->position, posX, posY);
    sfSprite_setTexture(select->wolf->sprite,
                        select->wolf->texture, sfFalse);
    sfSprite_setPosition(select->wolf->sprite,
    select->wolf->position);
}

void create_foret8(window_t *global)
{
    char *png = "resources/pictures/foret8.png";
    int top = 0;
    int left = 0;
    int width = 1200;
    int height = 731;
    int posX = 0;
    int posY = 0;

    global->foret8 = malloc(sizeof(sprite_t));
    global->foret8->sprite = create_sprite(global->foret8->sprite);
    global->foret8->texture = create_texture(global->foret8->texture, png);
    global->foret8->rect = create_rect(global->foret8->rect,
    top, left, width, height);
    global->foret8->position =
        create_position(global->foret8->position, posX, posY);
    sfSprite_setTexture(global->foret8->sprite,
                        global->foret8->texture, sfFalse);
}

void create_foret9(window_t *global)
{
    char *png = "resources/pictures/foret9.png";
    int top = 0;
    int left = 0;
    int width = 2600;
    int height = 731;
    int posX = 0;
    int posY = 0;

    global->foret9 = malloc(sizeof(sprite_t));
    global->foret9->sprite = create_sprite(global->foret9->sprite);
    global->foret9->texture =
        create_texture(global->foret9->texture, png);
    global->foret9->rect = create_rect(global->foret9->rect,
    top, left, width, height);
    global->foret9->position =
        create_position(global->foret9->position, posX, posY);
    sfSprite_setTexture(global->foret9->sprite,
                        global->foret9->texture, sfFalse);
}
