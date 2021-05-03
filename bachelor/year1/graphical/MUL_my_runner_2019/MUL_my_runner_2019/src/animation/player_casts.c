/*
** EPITECH PROJECT, 2019
** sokoban
** File description:
** player casts
*/

#include "../../include/runner.h"
#include <stdio.h>

void attack_status(window_t *global, select_player_t *select)
{
    sfEvent event;

    if (event.key.code == sfKeyLeft && select->left_status == 0) {
        global->character->position.x = global->character->position.x - 10;
    }
    if (event.key.code == sfKeyRight && select->right_status == 0) {
        global->character->position.x = global->character->position.x + 10;
    }
    if (event.key.code == sfKeyUp && global->jump == 0) {
        global->jump = 1;
        global->time = 0;
    }
    if (global->event->type == sfEvtMouseButtonPressed &&
        global->attack_status == 0) {
        global->attack_status = 1;
        global->character->rect.left = 0;
        global->character->rect.top = 1170;
    }
}

void player_attack(window_t *global)
{
    global->character->rect.left += 390;
    if (global->character->rect.left > 5460) {
        global->character->rect.left = 0;
        global->character->rect.top += 390;
    }
    if (global->character->rect.top >= 1560 &&
        global->character->rect.left > 2340) {
        global->character->rect.top = 0;
        global->character->rect.left = 0;
        global->attack_status = 0;
    }
}
