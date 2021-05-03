/*
** EPITECH PROJECT, 2020
** menu_loop
** File description:
** menu
*/

#include "defender.h"
#include "prototypes.h"
#include "my.h"

void call_create_map_selection_functions(window_t *global)
{
    create_map_selection_background(global);
    create_map_selection_hardmap_icon(global);
    create_map_selection_right_arrow(global);
    create_map_selection_left_arrow(global);
    set_map_selection_positions(global);
}

void call_in_selection_loop_functions(window_t *global)
{
    set_map_selection_rect(global);
}

void map_selection_loop(window_t *global, menu_t *menu)
{
    call_create_map_selection_functions(global);
    set_menu_positions(menu);
    while ((menu->start_selection == 1) &&
    (sfRenderWindow_isOpen(global->window))) {
        sfRenderWindow_clear(global->window, sfBlack);
        if (global->map_selection_management->start_play_hardmap == 1)
            game_hardmap_loop(global, menu);
        map_selection_event_loop(global, menu);
        call_in_selection_loop_functions(global);
        set_menu_rect(menu);
        draw_map_selection_sprite(menu, global);
        sfRenderWindow_display(global->window);
    }
}
