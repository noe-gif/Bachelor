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

void is_touched_start_hitbox(menu_t *menu, window_t *global, sfEvent event)
{
    if (((sfMouse_getPositionRenderWindow(global->window).x >=
    menu->start_button->position.x + 170) &&
    (sfMouse_getPositionRenderWindow(global->window).x <=
    menu->start_button->position.x + 400)) &&
        ((sfMouse_getPositionRenderWindow(global->window).y >=
    menu->start_button->position.y + 90)) &&
        (sfMouse_getPositionRenderWindow(global->window).y <=
    menu->start_button->position.y + 220) &&
        (menu->start_event != 1) && (menu->param_event != 1)) {
        if_start_hitbox_touched(menu, global);
    }
    else if (menu->start_event != 1) {
        menu->effect_value = 0;
        menu->start_button->rect.left = 0;
    }
    if (event.key.code == sfKeyUp) {
        draw_transi_2(menu, global);
        menu->start_event = 1;
        menu->start_button->rect.left = 805;
    }
}

void is_touched_param_hitbox(menu_t *menu, window_t *global, sfEvent event)
{
    if (((sfMouse_getPositionRenderWindow(global->window).x >=
    menu->param_button->position.x + 10) &&
    (sfMouse_getPositionRenderWindow(global->window).x <=
    menu->param_button->position.x + 50)) &&
        ((sfMouse_getPositionRenderWindow(global->window).y >=
    menu->param_button->position.y - 5) &&
    (sfMouse_getPositionRenderWindow(global->window).y <=
    menu->param_button->position.y + 55)))
        if_param_hitbox_touched(menu, global);
    else if ((menu->param_event != 1))
        menu->param_button->rect.left = 448;
    if ((event.key.code == sfKeyEscape) && (menu->param_event == 1))
        menu->param_event = 0;
}

void is_touched_quit_hitbox(menu_t *menu, window_t *global)
{
    if (((sfMouse_getPositionRenderWindow(global->window).x >=
    menu->quit_button->position.x) &&
    (sfMouse_getPositionRenderWindow(global->window).x <=
    menu->quit_button->position.x + 300)) &&
        ((sfMouse_getPositionRenderWindow(global->window).y >=
    menu->quit_button->position.y)) &&
        (sfMouse_getPositionRenderWindow(global->window).y <=
    menu->quit_button->position.y + 110) &&
        (menu->param_event == 1)) {
        if (global->event->type == sfEvtMouseButtonPressed) {
            sfRenderWindow_close(global->window);
            sfMusic_destroy(global->sound_management->menu_music);
        }
        menu->quit_button->rect.left = 235;
    }
    else
        menu->quit_button->rect.left = 340;
}

void if_mute_hitbox_touched(menu_t *menu, window_t *global)
{
    if (global->event->type == sfEvtMouseButtonReleased) {
        if (menu->mute_sound == 1) {
            menu->mute_sound = 0;
            sfMusic_play(global->sound_management->menu_music);
        }
        else if (menu->mute_sound == 0) {
            menu->mute_sound = 1;
            sfMusic_pause(global->sound_management->menu_music);
        }
    }
    menu->mute_button->rect.top = 295;
}
