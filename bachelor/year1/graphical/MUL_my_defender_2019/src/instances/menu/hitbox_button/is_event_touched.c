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

void if_start_hitbox_touched(menu_t *menu, window_t *global)
{
    menu->effect_value = 1;
    if (global->event->type == sfEvtMouseButtonPressed) {
        draw_transi_2(menu, global);
        menu->start_event = 1;
        menu->start_button->rect.left = 805;
    }
    if (menu->start_event != 1)
        menu->start_button->rect.left = 400;
}

void if_param_hitbox_touched(menu_t *menu, window_t *global)
{
    if ((global->event->type ==
    sfEvtMouseButtonPressed)
        && (menu->param_event == 1)) {
        menu->param_event = 0;
        menu->param_event_button = 1;
    }
    else if ((global->event->type ==
    sfEvtMouseButtonPressed) && (menu->param_event == 0)) {
        menu->param_event = 1;
        menu->param_button->rect.left = 503;
    }
    if ((menu->param_event == 1) &&
        (menu->param_event_button == 1))
        menu->param_button->rect.left = 448;
    if (menu->param_event != 1)
        menu->param_button->rect.left = 503;
}

void is_touched_mute_hitbox(menu_t *menu, window_t *global)
{
    if (((sfMouse_getPositionRenderWindow(global->window).x >=
    menu->mute_button->position.x) &&
    (sfMouse_getPositionRenderWindow(global->window).x <=
    menu->mute_button->position.x + 300)) &&
        ((sfMouse_getPositionRenderWindow(global->window).y
    >= menu->mute_button->position.y)) &&
        (sfMouse_getPositionRenderWindow(global->window).y
    <= menu->mute_button->position.y + 110) &&
        (menu->param_event == 1)) {
        if_mute_hitbox_touched(menu, global);
    }
    else {
        menu->mute_button->rect.left = 0;
        menu->mute_button->rect.top = 12;
    }
}

void is_touched_esc_hitbox(menu_t *menu, window_t *global)
{
    if (((sfMouse_getPositionRenderWindow(global->window).x >=
    menu->esc_button->position.x) &&
    (sfMouse_getPositionRenderWindow(global->window).x <=
    menu->esc_button->position.x + 200)) &&
        ((sfMouse_getPositionRenderWindow(global->window).y >=
    menu->esc_button->position.y + 30)) &&
        (sfMouse_getPositionRenderWindow(global->window).y <=
    menu->esc_button->position.y + 130) &&
        (menu->param_event == 1)) {
        if (global->event->type == sfEvtMouseButtonPressed)
            menu->param_event = 0;
        menu->esc_button->rect.left = 5;
        menu->esc_button->rect.top = 135;
    }
    else {
        menu->esc_button->rect.left = 120;
        menu->esc_button->rect.top = 0;
    }
}
