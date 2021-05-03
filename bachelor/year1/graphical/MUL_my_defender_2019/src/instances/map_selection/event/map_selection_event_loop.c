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

void map_selection_event_loop(window_t *global, menu_t *menu)
{
    sfEvent event;

    global->event = &event;
    while (sfRenderWindow_pollEvent(global->window, global->event)) {
        if (global->event->type == sfEvtClosed) {
            sfMusic_destroy(global->sound_management->menu_music);
            sfRenderWindow_close(global->window);
        }
        is_touched_param_hitbox(menu, global, event);
        is_touched_quit_hitbox(menu, global);
        is_touched_mute_hitbox(menu, global);
        is_touched_esc_hitbox(menu, global);
        is_touched_home_hitbox(menu, global);
        is_touched_hardmap_hitbox(global);
        is_touched_right_arrow_hitbox(global, event);
        is_touched_left_arrow_hitbox(global, event);
    }
}
