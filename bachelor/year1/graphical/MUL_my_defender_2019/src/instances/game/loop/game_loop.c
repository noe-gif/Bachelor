/*
** EPITECH PROJECT, 2020
** menu_loop
** File description:
** menu
*/

#include "defender.h"
#include "prototypes.h"
#include "my.h"

void call_create_game_functions(window_t *global)
{
    create_hard_map(global);
    create_transition3(global);
    create_turret_monkey_simple_button(global);
    create_turret_monkey_sorcer_button(global);
    create_turret_monkey_sniper_button(global);
    create_turret_monkey_boat_button(global);
    create_turret_monkey_ice_button(global);
    create_turret_monkey_simple(global);
    create_turret_monkey_sorcer(global);
    create_turret_monkey_sniper(global);
    create_turret_monkey_boat(global);
    create_turret_monkey_ice(global);
    create_range_circle(global);
    set_game_positions(global);
}

void call_in_game_loop_functions(window_t *global, menu_t *menu)
{
    place_selected_turret(global);
    start_clock(global);
    set_game_rect(global, menu);
}

void game_hardmap_loop(window_t *global, menu_t *menu)
{
    global->game_management->lives = 100;
    call_create_game_functions(global);
    global->clock_management->minutes = 0;
    sfClock_restart(global->clock_management->clock);
    while ((global->map_selection_management->start_play_hardmap == 1)
    && (sfRenderWindow_isOpen(global->window))) {
        sfRenderWindow_clear(global->window, sfBlack);
        clock_text_create(global);
        money_text_create(global);
        lives_text_create(global);
        waves_text_create(global);
        countdown_text_create(global);
        game_event_loop(global, menu);
        call_in_game_loop_functions(global, menu);
        draw_game_sprite(menu, global);
        sfRenderWindow_display(global->window);
    }
}

void game_easymap_loop(window_t *global)
{
    while (global->map_selection_management->start_play_easymap == 1) {
        sfRenderWindow_clear(global->window, sfBlack);
        sfRenderWindow_display(global->window);
    }
}
