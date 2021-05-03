/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** display window
*/

#include "../../include/runner.h"
#include <stdlib.h>

void set_window(window_t *global)
{
    sfVideoMode mode = {1200, 728, 32};
    global->window = create_window(global->window, mode);
}

void draw_menu_sprites(window_t *global, menu_t *menu)
{
    rect_sprites(global, menu);
    sfRenderWindow_drawSprite(global->window, menu->menu1->sprite, NULL);
    sfRenderWindow_drawSprite(global->window, menu->menu3->sprite, NULL);
    sfRenderWindow_drawSprite(global->window, menu->menu4->sprite, NULL);
    sfRenderWindow_drawSprite(global->window, menu->menu2->sprite, NULL);
    sfRenderWindow_drawSprite(global->window, menu->button->sprite, NULL);
    sfRenderWindow_drawSprite(global->window, menu->button2->sprite, NULL);
    draw_text(menu, global);
    sfRenderWindow_drawSprite(global->window,
    menu->transition1->sprite, NULL);
}

void call_create_sprites_functions(window_t *global, menu_t *menu,
    select_player_t *select)
{
    set_window(global);
    create_foret1(global);
    create_foret2(global);
    create_foret3(global);
    create_foret4(global);
    create_foret6(global);
    create_foret7(global);
    create_foret8(global);
    create_foret9(global);
    create_character(global);
    create_menu1(menu);
    create_menu2(menu);
    create_menu3(menu);
    create_menu4(menu);
    create_bat(select);
    create_wolf(select);
    menu_title(menu);
    play_button(menu);
    quit_button(menu);
    create_transition1(menu);
}

void anime_sprites(menu_t *menu)
{
    anime_menu1(menu);
    anime_menu2(menu);
    anime_menu3(menu);
    anime_menu4(menu);
    anime_transition1(menu);
}

int main(int ac, char **av)
{
    window_t *global = malloc(sizeof(window_t));
    menu_t *menu = malloc(sizeof(menu_t));
    select_player_t *select = malloc(sizeof(select_player_t));

    if (ac != 2) {
        my_putstr("usage: ./my_runner [map(.txt)]\n");
        return (84);
    }
    global->game_status = 0;
    global->jump = 0;
    global->attack_status = 0;
    select->left_status = 0;
    select->right_status = 0;
    complete_main(global, menu, select);
    return (0);
}
