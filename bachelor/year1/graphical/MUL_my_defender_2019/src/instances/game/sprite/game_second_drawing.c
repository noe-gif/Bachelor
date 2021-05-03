/*
** EPITECH PROJECT, 2020
** draw
** File description:
** menu
*/

#include "defender.h"
#include "prototypes.h"
#include "my.h"

void turret_drawing(window_t *global)
{
    if (global->game_management->monkey_simple_chosen == 1) {
        sfRenderWindow_drawSprite(global->window,
    global->game_management->range_circle->sprite, NULL);
        sfRenderWindow_drawSprite(global->window,
    global->game_management->turret_monkey_simple->sprite, NULL);
    }
    if (global->game_management->monkey_sorcer_chosen == 1) {
        sfRenderWindow_drawSprite(global->window,
    global->game_management->range_circle->sprite, NULL);
        sfRenderWindow_drawSprite(global->window,
    global->game_management->turret_monkey_sorcer->sprite, NULL);
    }
    if (global->game_management->monkey_sniper_chosen == 1)
        sfRenderWindow_drawSprite(global->window,
    global->game_management->turret_monkey_sniper->sprite, NULL);
}

void draw_turrets(window_t *global)
{
    turret_drawing(global);
    if (global->game_management->monkey_boat_chosen == 1) {
        sfRenderWindow_drawSprite(global->window,
    global->game_management->range_circle->sprite, NULL);
        sfRenderWindow_drawSprite(global->window,
    global->game_management->turret_monkey_boat->sprite, NULL);
    }
    if (global->game_management->monkey_ice_chosen == 1) {
        sfRenderWindow_drawSprite(global->window,
    global->game_management->range_circle->sprite, NULL);
        sfRenderWindow_drawSprite(global->window,
    global->game_management->turret_monkey_ice->sprite, NULL);
    }
}

void draw_third_game_sprites(menu_t *menu, window_t *global)
{
    if (menu->mute_sound == 1)
        sfRenderWindow_drawSprite(global->window,
    menu->mute_logo->sprite, NULL);
    if (menu->param_event == 1)
        draw_parameter_sprites(menu, global);
}

void draw_game_sprite(menu_t *menu, window_t *global)
{
    if (menu->home_event == 1) {
        sfRenderWindow_drawSprite(global->window,
    menu->menu_background->sprite, NULL);
        sfRenderWindow_drawSprite(global->window,
    menu->param_button->sprite, NULL);
    }
    if (menu->home_event == 0) {
        draw_in_game_sprite(menu, global);
        if (global->list != NULL)
            display_monkeys(global, global->list);
        if (global->list_baloons != NULL)
            display_baloons(global, global->list_baloons);
    }
    if ((menu->param_event == 1) && (menu->home_event != 1))
        draw_parameter_sprites(menu, global);
    draw_third_game_sprites(menu, global);
}
