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

void is_touched_simple_monkey_button_hitbox(window_t *global)
{
    if ((global->event->type == sfEvtMouseButtonPressed) &&
        (global->game_management->monkey_simple_chosen == 1) &&
        (global->game_management->bad_placement == 0)) {
        global->game_management->monkey_simple_chosen = 0;
        global->node = create_monkey_node(global);
        add_node_in_list(&global->list, global->node);
    }
    if (((sfMouse_getPositionRenderWindow(global->window).x >=
    global->game_management->turret_monkey_simple_button->position.x + 150) &&
    (sfMouse_getPositionRenderWindow(global->window).x <=
    global->game_management->turret_monkey_simple_button->position.x + 240)) &&
        ((sfMouse_getPositionRenderWindow(global->window).y >=
    global->game_management->turret_monkey_simple_button->position.y + 120)) &&
        (sfMouse_getPositionRenderWindow(global->window).y <=
    global->game_management->turret_monkey_simple_button->position.y + 200))
        simple_monkey_button(global);
    else {
        global->game_management->turret_monkey_simple_button->rect.left = 0;
        global->game_management->turret_monkey_simple_button->rect.width = 250;
    }
}

void is_touched_sorcer_monkey_button_hitbox(window_t *global)
{
    if ((global->event->type == sfEvtMouseButtonPressed) &&
        (global->game_management->monkey_sorcer_chosen == 1) &&
        (global->game_management->bad_placement == 0)) {
        global->game_management->monkey_sorcer_chosen = 0;
        global->node = create_sorcer_node(global);
        add_node_in_list(&global->list, global->node);
    }
    if (((sfMouse_getPositionRenderWindow(global->window).x >=
    global->game_management->turret_monkey_sorcer_button->position.x + 110) &&
    (sfMouse_getPositionRenderWindow(global->window).x <=
    global->game_management->turret_monkey_sorcer_button->position.x + 215)) &&
        ((sfMouse_getPositionRenderWindow(global->window).y >=
    global->game_management->turret_monkey_sorcer_button->position.y)) &&
        (sfMouse_getPositionRenderWindow(global->window).y <=
    global->game_management->turret_monkey_sorcer_button->position.y + 80))
        sorcer_monkey_button(global);
    else {
        global->game_management->turret_monkey_sorcer_button->rect.left = 37;
        global->game_management->turret_monkey_sorcer_button->rect.width = 250;
    }
}

void is_touched_sniper_monkey_button_hitbox(window_t *global)
{
    if ((global->event->type == sfEvtMouseButtonPressed) &&
        (global->game_management->monkey_sniper_chosen == 1) &&
        (global->game_management->bad_placement == 0)) {
        global->game_management->monkey_sniper_chosen = 0;
        global->node = create_sniper_node(global);
        add_node_in_list(&global->list, global->node);
    }
    if (((sfMouse_getPositionRenderWindow(global->window).x >=
    global->game_management->turret_monkey_sniper_button->position.x + 110) &&
    (sfMouse_getPositionRenderWindow(global->window).x <=
    global->game_management->turret_monkey_sniper_button->position.x + 215)) &&
        ((sfMouse_getPositionRenderWindow(global->window).y >=
    global->game_management->turret_monkey_sniper_button->position.y)) &&
        (sfMouse_getPositionRenderWindow(global->window).y <=
    global->game_management->turret_monkey_sniper_button->position.y + 80))
        sniper_monkey_button(global);
    else {
        global->game_management->turret_monkey_sniper_button->rect.left = 37;
        global->game_management->turret_monkey_sniper_button->rect.width = 250;
    }
}

void is_touched_boat_monkey_button_hitbox(window_t *global)
{
    if ((global->event->type == sfEvtMouseButtonPressed) &&
        (global->game_management->monkey_boat_chosen == 1) &&
        (global->game_management->bad_placement == 0)) {
        global->game_management->monkey_boat_chosen = 0;
        global->node = create_boat_node(global);
        add_node_in_list(&global->list, global->node);
    }
    if (((sfMouse_getPositionRenderWindow(global->window).x >=
    global->game_management->turret_monkey_boat_button->position.x + 110) &&
    (sfMouse_getPositionRenderWindow(global->window).x <=
    global->game_management->turret_monkey_boat_button->position.x + 215)) &&
        ((sfMouse_getPositionRenderWindow(global->window).y >=
    global->game_management->turret_monkey_boat_button->position.y)) &&
        (sfMouse_getPositionRenderWindow(global->window).y <=
    global->game_management->turret_monkey_boat_button->position.y + 80))
        boat_monkey_button(global);
    else {
        global->game_management->turret_monkey_boat_button->rect.left = 37;
        global->game_management->turret_monkey_boat_button->rect.width = 250;
    }
}

void is_touched_ice_monkey_button_hitbox(window_t *global)
{
    if ((global->event->type == sfEvtMouseButtonPressed) &&
        (global->game_management->monkey_ice_chosen == 1) &&
        (global->game_management->bad_placement == 0)) {
        global->game_management->monkey_ice_chosen = 0;
        global->node = create_ice_node(global);
        add_node_in_list(&global->list, global->node);
    }
    if (((sfMouse_getPositionRenderWindow(global->window).x >=
    global->game_management->turret_monkey_ice_button->position.x + 110) &&
    (sfMouse_getPositionRenderWindow(global->window).x <=
    global->game_management->turret_monkey_ice_button->position.x + 215)) &&
        ((sfMouse_getPositionRenderWindow(global->window).y >=
    global->game_management->turret_monkey_ice_button->position.y)) &&
        (sfMouse_getPositionRenderWindow(global->window).y <=
    global->game_management->turret_monkey_ice_button->position.y + 80))
        ice_monkey_button(global);
    else {
        global->game_management->turret_monkey_ice_button->rect.left = 37;
        global->game_management->turret_monkey_ice_button->rect.width = 250;
    }
}
