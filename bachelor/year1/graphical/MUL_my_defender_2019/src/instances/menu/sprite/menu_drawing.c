/*
** EPITECH PROJECT, 2020
** draw
** File description:
** menu
*/

#include "defender.h"
#include "my.h"

void draw_parameter_sprites(menu_t *menu, window_t *global)
{
    sfRenderWindow_drawSprite(global->window,
    menu->param_background->sprite, NULL);
    sfRenderWindow_drawSprite(global->window,
    menu->quit_button->sprite, NULL);
    sfRenderWindow_drawSprite(global->window,
    menu->mute_button->sprite, NULL);
    sfRenderWindow_drawSprite(global->window,
    menu->esc_button->sprite, NULL);
}

void draw_second_part_menu_sprites(menu_t *menu, window_t *global)
{
    sfRenderWindow_drawSprite(global->window,
    menu->menu_smoke->sprite, NULL);
        if (menu->background_value != 1)
            sfRenderWindow_drawSprite(global->window,
    menu->menu_background->sprite, NULL);
        if (menu->background_value != 1) {
            if (menu->effect_value == 1)
                sfRenderWindow_drawSprite(global->window,
    menu->menu_title_effect->sprite, NULL);
            sfRenderWindow_drawSprite(global->window,
    menu->start_button->sprite, NULL);
        }
        if (menu->end_transi2 != 1)
            sfRenderWindow_drawSprite(global->window,
    menu->param_button->sprite, NULL);
        sfRenderWindow_drawSprite(global->window,
    menu->menu_transition->sprite, NULL);
}

void draw_menu_sprite(menu_t *menu, window_t *global)
{
    if (menu->home_event == 0)
        draw_second_part_menu_sprites(menu, global);
    if ((menu->param_event == 1) && (menu->home_event != 1))
        draw_parameter_sprites(menu, global);
    if (menu->mute_sound == 1)
        sfRenderWindow_drawSprite(global->window,
    menu->mute_logo->sprite, NULL);
    if (menu->param_event == 1)
    draw_parameter_sprites(menu, global);
}

void draw_transi_2(menu_t *menu, window_t *global)
{
    sfRenderWindow_drawSprite(global->window,
    menu->menu_transition2->sprite, NULL);
}
