/*
** EPITECH PROJECT, 2019
** anime
** File description:
** runner
*/

#include "../../include/runner.h"

void anime_foret7(window_t *global)
{
    sfVector2f vector = {-16, 0};

    sfSprite_move(global->foret7->sprite, vector);
    if (sfSprite_getPosition(global->foret7->sprite).x <= -1282) {
        sfSprite_setPosition(global->foret7->sprite, global->foret7->position);
    }
}

void anime_menu1(menu_t *menu)
{
    sfVector2f vector = {-10, 0};

    sfSprite_move(menu->menu1->sprite, vector);
    if (sfSprite_getPosition(menu->menu1->sprite).x <= -1282) {
        sfSprite_setPosition(menu->menu1->sprite, menu->menu1->position);
    }
}

void anime_menu2(menu_t *menu)
{
    sfVector2f vector = {-16, 0};

    sfSprite_move(menu->menu2->sprite, vector);
    if (sfSprite_getPosition(menu->menu2->sprite).x <= -1306) {
        sfSprite_setPosition(menu->menu2->sprite, menu->menu2->position);
    }
}

void anime_menu3(menu_t *menu)
{
    sfVector2f vector = {-3, 0};

    sfSprite_move(menu->menu3->sprite, vector);
    if (sfSprite_getPosition(menu->menu3->sprite).x <= -1282) {
        sfSprite_setPosition(menu->menu3->sprite, menu->menu3->position);
    }
}

void anime_menu4(menu_t *menu)
{
    sfVector2f vector = {-8, 0};

    sfSprite_move(menu->menu4->sprite, vector);
    if (sfSprite_getPosition(menu->menu4->sprite).x <= -1300) {
        sfSprite_setPosition(menu->menu4->sprite, menu->menu4->position);
    }
}
