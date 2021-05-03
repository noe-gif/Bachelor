/*
** EPITECH PROJECT, 2020
** drag&drop
** File description:
** defender
*/

#include "defender.h"
#include "prototypes.h"

void is_monkey_simple_right_place(window_t *global)
{
    if (((global->game_management->turret_monkey_simple->position.x >= 100)
    && (global->game_management->turret_monkey_simple->position.x <= 1000)) &&
        ((global->game_management->turret_monkey_simple->position.y >= 50) &&
    (global->game_management->turret_monkey_simple->position.y <= 500))) {
        global->game_management->range_circle->rect.top = 0;
        global->game_management->bad_placement = 0;
    }
    else {
        global->game_management->bad_placement = 1;
        global->game_management->range_circle->rect.top = 365;
    }
}

void is_monkey_sorcer_right_place(window_t *global)
{
    if ((((global->game_management->turret_monkey_sorcer->position.x >= 100)
    && (global->game_management->turret_monkey_sorcer->position.x <= 1000)) &&
        ((global->game_management->turret_monkey_sorcer->position.y >= 50) &&
    (global->game_management->turret_monkey_sorcer->position.y <= 500)))) {
        global->game_management->range_circle->rect.top = 0;
        global->game_management->bad_placement = 0;
    }
    else {
        global->game_management->bad_placement = 1;
        global->game_management->range_circle->rect.top = 365;
    }
}

void is_monkey_sniper_right_place(window_t *global)
{
    if ((((global->game_management->turret_monkey_sniper->position.x >= 100)
    && (global->game_management->turret_monkey_sniper->position.x <= 1000)) &&
        ((global->game_management->turret_monkey_sniper->position.y >= 50) &&
    (global->game_management->turret_monkey_sniper->position.y <= 500)))) {
        global->game_management->range_circle->rect.top = 0;
        global->game_management->bad_placement = 0;
    }
    else {
        global->game_management->bad_placement = 1;
        global->game_management->range_circle->rect.top = 365;
    }
}

void is_monkey_ice_right_place(window_t *global)
{
    if ((((global->game_management->turret_monkey_ice->position.x >= 100)
    && (global->game_management->turret_monkey_ice->position.x <= 1000)) &&
        ((global->game_management->turret_monkey_ice->position.y >= 50) &&
    (global->game_management->turret_monkey_ice->position.y <= 500)))) {
        global->game_management->range_circle->rect.top = 0;
        global->game_management->bad_placement = 0;
    }
    else {
        global->game_management->bad_placement = 1;
        global->game_management->range_circle->rect.top = 365;
    }
}
