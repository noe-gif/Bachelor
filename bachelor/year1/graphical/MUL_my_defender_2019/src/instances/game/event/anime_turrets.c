/*
** EPITECH PROJECT, 2020
** menu_event
** File description:
** defender
*/

#include "defender.h"
#include "my.h"
#include "prototypes.h"

void anime_ice_turret(window_t *global)
{
    global->game_management->turret_monkey_ice->rect.left += 0;
    if (global->game_management->turret_monkey_ice->rect.left >= 500)
    global->game_management->turret_monkey_ice->rect.left = 0;
}
