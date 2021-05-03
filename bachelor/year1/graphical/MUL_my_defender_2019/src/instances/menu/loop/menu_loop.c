/*
** EPITECH PROJECT, 2020
** menu_loop
** File description:
** menu
*/

#include "defender.h"
#include "prototypes.h"
#include "my.h"

void call_create_menu_functions(menu_t *menu)
{
    create_menu_transition(menu);
    create_menu_transition_2(menu);
    create_menu_background(menu);
    create_param_background(menu);
    create_menu_start_button(menu);
    create_menu_param_button(menu);
    create_menu_quit_button(menu);
    create_menu_mute_button(menu);
    create_menu_esc_button(menu);
    create_menu_home_button(menu);
    create_menu_mute_logo(menu);
    create_menu_title_effect(menu);
    create_menu_smoke(menu);
    set_menu_positions(menu);
}

void call_in_loop_functions(menu_t *menu, window_t *global)
{
    anime_transition1(menu);
    anime_smoke(menu);
    anime_menu_title_effect(menu);
    draw_menu_sprite(menu, global);
    set_menu_rect(menu);
}

void menu_loop(window_t *global, menu_t *menu)
{
    set_window(global);
    call_create_menu_functions(menu);
    create_menu_music(global);
    create_clock(global);
    sfRenderWindow_setFramerateLimit(global->window, 30);
    while (sfRenderWindow_isOpen(global->window)) {
        sfRenderWindow_clear(global->window, sfBlack);
        if (menu->start_event != 1)
            menu_event_loop(menu, global);
        call_in_loop_functions(menu, global);
        if (menu->start_event == 1) {
            anime_transition2(menu);
            draw_transi_2(menu, global);
        }
        if (menu->start_selection == 1)
            map_selection_loop(global, menu);
        sfRenderWindow_display(global->window);
    }
    sfRenderWindow_destroy(global->window);
}
