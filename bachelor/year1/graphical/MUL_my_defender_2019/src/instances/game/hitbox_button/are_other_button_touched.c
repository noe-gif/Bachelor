/*
** EPITECH PROJECT, 2020
** hitbox_button_start
** File description:
** defender
*/

#include "defender.h"
#include "prototypes.h"
#include "my.h"
#include <SFML/Window/Export.h>
#include <SFML/Window.h>
#include <SFML/System/Vector2.h>
#include <SFML/Audio.h>
#include <SFML/Audio/Export.h>
#include <SFML/Audio/SoundStatus.h>
#include <SFML/Audio/Types.h>

void simple_monkey_button(window_t *global)
{
    if ((global->event->type == sfEvtMouseButtonPressed) &&
        (global->game_management->money >= 50)) {
            global->game_management->monkey_simple_chosen = 1;
            global->game_management->money -= 50;
    }
    if ((global->event->type == sfEvtMouseButtonPressed) &&
        (global->game_management->money < 50))
        global->game_management->isnt_enough = 1;
    global->game_management->turret_monkey_simple_button->rect.left = 150;
    global->game_management->turret_monkey_simple_button->rect.width = 450;
}

void sorcer_monkey_button(window_t *global)
{
    if ((global->event->type == sfEvtMouseButtonPressed) &&
        ((global->game_management->money >= 100))) {
        global->game_management->monkey_sorcer_chosen = 1;
        global->game_management->money -= 100;
        }
    if ((global->event->type == sfEvtMouseButtonPressed) &&
        (global->game_management->money < 100))
        global->game_management->isnt_enough = 1;
    global->game_management->turret_monkey_sorcer_button->rect.left = 185;
    global->game_management->turret_monkey_sorcer_button->rect.width = 450;
}

void sniper_monkey_button(window_t *global)
{
    if ((global->event->type == sfEvtMouseButtonPressed) &&
        ((global->game_management->money >= 250))) {
        global->game_management->monkey_sniper_chosen = 1;
        global->game_management->money -= 250;
    }
    if ((global->event->type == sfEvtMouseButtonPressed) &&
        (global->game_management->money < 250))
        global->game_management->isnt_enough = 1;
    global->game_management->turret_monkey_sniper_button->rect.left = 185;
    global->game_management->turret_monkey_sniper_button->rect.width = 450;
}

void boat_monkey_button(window_t *global)
{
    if ((global->event->type == sfEvtMouseButtonPressed) &&
        ((global->game_management->money >= 500))) {
        global->game_management->monkey_boat_chosen = 1;
        global->game_management->money -= 500;
    }
    if ((global->event->type == sfEvtMouseButtonPressed) &&
        (global->game_management->money < 500))
        global->game_management->isnt_enough = 1;
    global->game_management->turret_monkey_boat_button->rect.left = 190;
    global->game_management->turret_monkey_boat_button->rect.width = 450;
}

void ice_monkey_button(window_t *global)
{
    if ((global->event->type == sfEvtMouseButtonPressed) &&
        ((global->game_management->money >= 1000))) {
        global->game_management->monkey_ice_chosen = 1;
        global->game_management->money -= 1000;
    }
    if ((global->event->type == sfEvtMouseButtonPressed) &&
        (global->game_management->money < 1000))
        global->game_management->isnt_enough = 1;
    global->game_management->turret_monkey_ice_button->rect.left = 190;
    global->game_management->turret_monkey_ice_button->rect.width = 450;
}
