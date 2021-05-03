/*
** EPITECH PROJECT, 2019
** moove_sprite
** File description:
** runner
*/

#include "../../include/runner.h"

void anime_foret1(window_t *global)
{
    sfVector2f vector = {-2, 0};

    sfSprite_move(global->foret1->sprite, vector);
    if ((sfSprite_getPosition(global->foret1->sprite).x) <= -1200) {
        sfSprite_setPosition(global->foret1->sprite, global->foret1->position);
    }
}

void anime_foret2(window_t *global)
{
    sfVector2f vector = {-2, 0};

    sfSprite_move(global->foret2->sprite, vector);
    if (sfSprite_getPosition(global->foret2->sprite).x <= -1292) {
        sfSprite_setPosition(global->foret2->sprite, global->foret2->position);
    }
}

void anime_foret3(window_t *global)
{
    sfVector2f vector = {-5, 0};

    sfSprite_move(global->foret3->sprite, vector);
    if (sfSprite_getPosition(global->foret3->sprite).x <= -1286) {
        sfSprite_setPosition(global->foret3->sprite, global->foret3->position);
    }

}

void anime_foret4(window_t *global)
{
    sfVector2f vector = {-8, 0};

    sfSprite_move(global->foret4->sprite, vector);
    if (sfSprite_getPosition(global->foret4->sprite).x <= -1200) {
        sfSprite_setPosition(global->foret4->sprite, global->foret4->position);
    }
}

void anime_foret6(window_t *global)
{
    sfVector2f vector = {-16, 0};

    sfSprite_move(global->foret6->sprite, vector);
    if (sfSprite_getPosition(global->foret6->sprite).x <= -1296) {
        sfSprite_setPosition(global->foret6->sprite, global->foret6->position);
    }
}
