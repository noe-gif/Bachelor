/*
** EPITECH PROJECT, 2019
** moove3
** File description:
** runner
*/

#include "../../include/runner.h"

void anime_foret9(window_t *global)
{
    global->foret9->position.x = global->foret9->position.x - 7;
    if (global->foret9->position.x < -1200)
        global->foret9->position.x = 0;
}

void anime_wolf(select_player_t *select)
{
    select->wolf->position.x = select->wolf->position.x - 16;
    select->wolf->rect.left += 410;
    if (select->wolf->rect.left > 5740) {
        select->wolf->rect.left = 0;
        select->wolf->rect.top += 410;
    }
    if (select->wolf->rect.top >= 820 && select->wolf->rect.left > 3280) {
        select->wolf->rect.top = 410;
        select->wolf->rect.left = 3690;
    }
    if (select->wolf->position.x <= -200)
        select->wolf->position.x = 1300;
}

void anime_bat(select_player_t *select)
{
    select->bat->rect.left += 100;
    select->bat->position.x = select->bat->position.x - 22;
    if (select->bat->rect.left > 700) {
        select->bat->rect.left = 0;
    }
    if (select->bat->position.x <= -200)
        select->bat->position.x = 2300;
}
