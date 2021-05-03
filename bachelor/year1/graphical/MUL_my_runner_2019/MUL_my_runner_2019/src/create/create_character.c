/*
** EPITECH PROJECT, 2019
** character
** File description:
** runner
*/

#include "../../include/runner.h"
#include <stdlib.h>

void create_character(window_t *global)
{
    char *png = "resources/pictures/CHARACTER.png";
    int top = 0;
    int left = 0;
    int width = 390;
    int height = 390;
    int posX = -30;
    int posY = 315;

    global->character = malloc(sizeof(sprite_t));
    global->character->sprite = create_sprite(global->character->sprite);
    global->character->texture =
        create_texture(global->character->texture, png);
    global->character->rect = create_rect(global->character->rect,
    top, left, width, height);
    global->character->position = create_position(global->character->position,
    posX, posY);
    sfSprite_setTexture(global->character->sprite,
    global->character->texture, sfFalse);
}

void anime_character(window_t *global, select_player_t *select)
{
    if (global->attack_status != 1) {
        global->character->rect.left += 390;
        if (global->character->rect.left > 5460) {
            global->character->rect.left = 0;
            global->character->rect.top += 390;
        }
        if (global->character->rect.top >= 390 &&
            global->character->rect.left > 0)
            global->character->rect.top = 0;
    }
    else if (global->attack_status == 1)
        player_attack(global);
    if (global->character->position.x < -100)
        global->character->position.x = -100;
    if (global->character->position.x >= 900)
        global->character->position.x = 900;
    hitbox_ennemy(select, global);
}

void character_jump(window_t **global)
{
    (*global)->character->position.y = 0.005 *
        ((*global)->time * (*global)->time) -
        (2.5 * (*global)->time) + 315;
    if ((*global)->character->position.y >= 315) {
        (*global)->character->position.y = 315;
        (*global)->jump = 0;
    }
}

void create_ennemy(window_t *global)
{
    char *png = "resources/pictures/ENNEMY.png";
    int top = 0;
    int left = 0;
    int width = 150;
    int height = 154;
    int posX = 500;
    int posY = 450;

    global->ennemy = malloc(sizeof(sprite_t));
    global->ennemy->sprite = create_sprite(global->ennemy->sprite);
    global->ennemy->texture =
        create_texture(global->ennemy->texture, png);
    global->ennemy->rect = create_rect(global->ennemy->rect,
    top, left, width, height);
    global->ennemy->position =
        create_position(global->ennemy->position, posX, posY);
    sfSprite_setTexture(global->ennemy->sprite,
                        global->ennemy->texture, sfFalse);
}

void anime_ennemy(window_t *global)
{
    global->ennemy->position.x =
        global->ennemy->position.x - 4;
    global->ennemy->rect.left += 150;
    if (global->ennemy->rect.left > 2100) {
        global->ennemy->rect.left = 0;
        global->ennemy->rect.top += 150;
    }
    if (global->ennemy->rect.top >= 1050 &&
        global->ennemy->rect.left > 100)
        global->ennemy->rect.top = 0;
    if (global->ennemy->position.x < 100)
        global->ennemy->position.x = 1300;
}
