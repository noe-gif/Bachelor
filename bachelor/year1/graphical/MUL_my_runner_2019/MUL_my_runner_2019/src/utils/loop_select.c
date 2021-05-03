/*
** EPITECH PROJECT, 2020
** loop
** File description:
** runner
*/

#include "../../include/runner.h"
#include "../../include/my.h"

void complete__select(window_t *global, menu_t *menu,
    select_player_t *select)
{
    sfSprite_setPosition(global->character->sprite,
    global->character->position);
    if (global->jump != 0) {
        global->time = global->time + 13;
        character_jump(&global);
    }
    anime_character(global, select);
    rect_select_sprites(global, menu, select);
}

void complete_select_loop(window_t *global, menu_t *menu,
    select_player_t *select)
{
    anime_wolf(select);
    anime_bat(select);
    sfSprite_setPosition(select->wolf->sprite, select->wolf->position);
    sfSprite_setTextureRect(select->wolf->sprite, select->wolf->rect);
    sfSprite_setPosition(select->bat->sprite, select->bat->position);
    sfSprite_setTextureRect(select->bat->sprite, select->bat->rect);
    sfRenderWindow_drawSprite(global->window, global->foret1->sprite, NULL);
    sfRenderWindow_drawSprite(global->window, global->foret2->sprite, NULL);
    sfRenderWindow_drawSprite(global->window, global->foret3->sprite, NULL);
    sfRenderWindow_drawSprite(global->window, global->foret4->sprite, NULL);
    sfRenderWindow_drawSprite(global->window, global->foret6->sprite, NULL);
}
