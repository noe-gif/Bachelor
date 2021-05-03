/*
** EPITECH PROJECT, 2020
** draw
** File description:
** menu
*/

#include "defender.h"
#include "prototypes.h"
#include "my.h"

void draw_selection_map(menu_t *menu, window_t *global)
{
    sfRenderWindow_drawSprite(global->window,
    global->map_selection_management->map_selection_background->sprite, NULL);
        sfRenderWindow_drawSprite(global->window,
    global->map_selection_management->map_selection_hardmap_icon->sprite, NULL);
        sfRenderWindow_drawSprite(global->window,
    global->map_selection_management->map_selection_right_arrow->sprite, NULL);
        sfRenderWindow_drawSprite(global->window,
    global->map_selection_management->map_selection_left_arrow->sprite, NULL);
        sfRenderWindow_drawSprite(global->window,
    menu->home_button->sprite, NULL);
        sfRenderWindow_drawSprite(global->window,
    menu->param_button->sprite, NULL);
}

void draw_map_selection_sprite(menu_t *menu, window_t *global)
{
    if (menu->home_event == 1) {
        sfRenderWindow_drawSprite(global->window,
    menu->menu_background->sprite, NULL);
        sfRenderWindow_drawSprite(global->window,
    menu->param_button->sprite, NULL);
    }
    if (menu->home_event == 0)
        draw_selection_map(menu, global);
    if ((menu->param_event == 1) && (menu->home_event != 1))
        draw_parameter_sprites(menu, global);
    if (menu->mute_sound == 1)
        sfRenderWindow_drawSprite(global->window,
    menu->mute_logo->sprite, NULL);
    if (menu->param_event == 1)
    draw_parameter_sprites(menu, global);
}
