/*
** EPITECH PROJECT, 2020
** draw
** File description:
** menu
*/

#include "defender.h"
#include "prototypes.h"
#include "my.h"

void draw_in_game_sprite(menu_t *menu, window_t *global)
{
    sfRenderWindow_drawSprite(global->window,
    global->game_management->hardmap->sprite, NULL);
        sfRenderWindow_drawSprite(global->window,
    menu->param_button->sprite, NULL);
        sfRenderWindow_drawSprite(global->window,
    global->game_management->turret_monkey_simple_button->sprite, NULL);
        sfRenderWindow_drawSprite(global->window,
    global->game_management->turret_monkey_ice_button->sprite, NULL);
        sfRenderWindow_drawSprite(global->window,
    global->game_management->turret_monkey_sniper_button->sprite, NULL);
        sfRenderWindow_drawSprite(global->window,
    global->game_management->turret_monkey_sorcer_button->sprite, NULL);
        sfRenderWindow_drawSprite(global->window,
    global->game_management->turret_monkey_boat_button->sprite, NULL);
        sfRenderWindow_drawSprite(global->window,
    menu->home_button->sprite, NULL);
        draw_game_text(global);
        sfRenderWindow_drawSprite(global->window,
    global->game_management->transition3->sprite, NULL);
        draw_turrets(global);
}

void draw_last_turrets(window_t *global)
{
    global = global;
}

void draw_other_turrets(window_t *global)
{
    global = global;
}
