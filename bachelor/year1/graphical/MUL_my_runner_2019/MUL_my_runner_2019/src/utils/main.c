/*
** EPITECH PROJECT, 2020
** main
** File description:
** runner
*/

#include "../../include/runner.h"
#include "../../include/my.h"
#include <stdlib.h>

void complete_main(window_t *global, menu_t *menu, select_player_t *select)
{
    create_button(menu);
    create_button2(menu);
    call_create_sprites_functions(global, menu, select);
    sfRenderWindow_setFramerateLimit(global->window, 33);
    set_position_sprites(global, menu);
    while (sfRenderWindow_isOpen(global->window)) {
        sfRenderWindow_clear(global->window, sfBlack);
        event_loop(global, menu);
        check_menu_status(global, menu);
        if (global->game_status == 0) {
            draw_menu_sprites(global, menu);
            anime_sprites(menu);
            sfRenderWindow_display(global->window);
        }
        if (global->game_status == 1) {
            anime_sprites(menu);
            select_menu(global, menu, select);
        }
    }
    sfRenderWindow_destroy(global->window);
}
