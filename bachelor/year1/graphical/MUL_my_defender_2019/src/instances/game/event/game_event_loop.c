/*
** EPITECH PROJECT, 2020
** menu_event
** File description:
** defender
*/

#include "defender.h"
#include "my.h"
#include "prototypes.h"
#include <SFML/Audio.h>

void anime_transition3(window_t *global)
{
    if (global->game_management->transition3->rect.top <= 0) {
        global->game_management->transition3->rect.left = 0;
        global->game_management->transition3->rect.top = 0;
        return;
    }
    if (global->game_management->transition3->rect.top > -675)
        global->game_management->transition3->rect.left -= 1200;
    if (global->game_management->transition3->rect.left < 0) {
        global->game_management->transition3->rect.left = 8400;
        global->game_management->transition3->rect.top -= 675;
    }
}

void call_event_loop_functions(window_t *global,
sfEvent event, menu_t *menu)
{
    is_touched_param_hitbox(menu, global, event);
    is_touched_quit_hitbox(menu, global);
    is_touched_mute_hitbox(menu, global);
    is_touched_esc_hitbox(menu, global);
    is_touched_home_hitbox(menu, global);
    is_touched_simple_monkey_button_hitbox(global);
    is_touched_sorcer_monkey_button_hitbox(global);
    is_touched_sniper_monkey_button_hitbox(global);
    is_touched_boat_monkey_button_hitbox(global);
    is_touched_ice_monkey_button_hitbox(global);
}

void game_event_loop(window_t *global, menu_t *menu)
{
    sfEvent event;

    global->event = &event;
    while (sfRenderWindow_pollEvent(global->window, global->event)) {
        if (global->event->type == sfEvtClosed) {
            sfMusic_destroy(global->sound_management->menu_music);
            sfRenderWindow_close(global->window);
        }
        call_event_loop_functions(global, event, menu);
    }
    anime_ice_turret(global);
    anime_transition3(global);
}
