/*
** EPITECH PROJECT, 2020
** drag&drop
** File description:
** defender
*/

#include "defender.h"
#include "prototypes.h"

void place_selected_turret(window_t *global)
{
    if (global->game_management->monkey_simple_chosen == 1) {
        global->game_management->range_circle->position.x =
            global->game_management->turret_monkey_simple->position.x - 150;
        global->game_management->range_circle->position.y =
            global->game_management->turret_monkey_simple->position.y - 100;
        global->game_management->turret_monkey_simple->position.x =
            sfMouse_getPositionRenderWindow(global->window).x - 20;
        global->game_management->turret_monkey_simple->position.y =
            sfMouse_getPositionRenderWindow(global->window).y - 70;
        is_monkey_simple_right_place(global);
    }
    place_sorcer(global);
    place_sniper(global);
    place_boat(global);
    place_ice(global);
}

void place_sorcer(window_t *global)
{
    if (global->game_management->monkey_sorcer_chosen == 1) {
        global->game_management->range_circle->position.x =
            global->game_management->turret_monkey_sorcer->position.x - 130;
        global->game_management->range_circle->position.y =
            global->game_management->turret_monkey_sorcer->position.y - 100;
        global->game_management->turret_monkey_sorcer->position.x =
            sfMouse_getPositionRenderWindow(global->window).x - 20;
        global->game_management->turret_monkey_sorcer->position.y =
            sfMouse_getPositionRenderWindow(global->window).y - 70;
        is_monkey_sorcer_right_place(global);
    }
}

void place_sniper(window_t *global)
{
    if (global->game_management->monkey_sniper_chosen == 1) {
        global->game_management->turret_monkey_sniper->position.x =
            sfMouse_getPositionRenderWindow(global->window).x - 60;
        global->game_management->turret_monkey_sniper->position.y =
            sfMouse_getPositionRenderWindow(global->window).y - 140;
        is_monkey_sniper_right_place(global);
    }
}

void place_boat(window_t *global)
{
    if (global->game_management->monkey_boat_chosen == 1) {
        global->game_management->range_circle->position.x =
            global->game_management->turret_monkey_boat->position.x - 95;
        global->game_management->range_circle->position.y =
            global->game_management->turret_monkey_boat->position.y - 80;
        global->game_management->turret_monkey_boat->position.x =
            sfMouse_getPositionRenderWindow(global->window).x - 60;
        global->game_management->turret_monkey_boat->position.y =
            sfMouse_getPositionRenderWindow(global->window).y - 140;
        if (((global->game_management->turret_monkey_boat->position.x >= 240)
    && (global->game_management->turret_monkey_boat->position.x <= 370)) &&
            ((global->game_management->turret_monkey_boat->position.y >= 120) &&
    (global->game_management->turret_monkey_boat->position.y <= 250))) {
            global->game_management->range_circle->rect.top = -40;
            global->game_management->bad_placement = 0;
        }
        else {
            global->game_management->bad_placement = 1;
            global->game_management->range_circle->rect.top = 330;
        }
    }
}

void place_ice(window_t *global)
{
    if (global->game_management->monkey_ice_chosen == 1) {
        global->game_management->range_circle->rect.top = 0;
        global->game_management->range_circle->position.x =
            global->game_management->turret_monkey_ice->position.x - 115;
        global->game_management->range_circle->position.y =
            global->game_management->turret_monkey_ice->position.y - 85;
        global->game_management->turret_monkey_ice->position.x =
            sfMouse_getPositionRenderWindow(global->window).x - 80;
        global->game_management->turret_monkey_ice->position.y =
            sfMouse_getPositionRenderWindow(global->window).y - 100;
        is_monkey_ice_right_place(global);
    }
}
