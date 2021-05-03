/*
** EPITECH PROJECT, 2020
** hitbox
** File description:
** runner
*/

#include "../../include/runner.h"
#include "../../include/my.h"

void hitbox_bat(select_player_t *select, window_t *global)
{
    int a = (((sfSprite_getPosition(global->character->sprite).x)
    - (sfSprite_getPosition(select->bat->sprite).x)));
    int b = (((sfSprite_getPosition(global->character->sprite).y) + 390)
    - (sfSprite_getPosition(select->bat->sprite).y + 410));

    if (global->attack_status == 1) {
        if ((a > -155) && (a < -5) && (b <= -30) && (b > -280)) {
            select->bat->position.x = 1500;
        }
    }
}

void hitbox_ennemy(select_player_t *select, window_t *global)
{
    int x = (((sfSprite_getPosition(global->character->sprite).x)
    - (sfSprite_getPosition(select->wolf->sprite).x)));
    int y = (((sfSprite_getPosition(global->character->sprite).y) + 390)
    - (sfSprite_getPosition(select->wolf->sprite).y + 410));

    if ((x > -155) && (x < -5) && (y <= -30) && (y > -280))
        sfClock_restart(select->clock);
    if (global->attack_status == 1) {
        if ((x > -155) && (x < -5) && (y <= -30) && (y > -280)) {
            select->wolf->position.x = 1500;
        }
    }
    hitbox_bat(select, global);
}
