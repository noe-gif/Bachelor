/*
** EPITECH PROJECT, 2020
** select_player
** File description:
** runner
*/

#include "../../include/runner.h"
#include "../../include/my.h"
#include <stdio.h>

void create_select_sprites(window_t *global, menu_t *menu,
    select_player_t *select)
{
    create_foret1(global);
    create_foret2(global);
    create_foret3(global);
    create_foret4(global);
    create_foret6(global);
    create_foret7(global);
    create_foret8(global);
    create_foret9(global);
    create_transition1(menu);
    create_bat(select);
    create_wolf(select);
    create_character(global);
    create_clock(select);
}

void set_select_sprites(window_t *global, menu_t *menu)
{
    sfSprite_setPosition(global->foret1->sprite, global->foret1->position);
    sfSprite_setPosition(global->foret2->sprite, global->foret2->position);
    sfSprite_setPosition(global->foret3->sprite, global->foret3->position);
    sfSprite_setPosition(global->foret4->sprite, global->foret4->position);
    sfSprite_setPosition(global->foret6->sprite, global->foret6->position);
    sfSprite_setPosition(global->foret7->sprite, global->foret7->position);
    sfSprite_setPosition(global->foret8 ->sprite, global->foret8->position);
    sfSprite_setPosition(global->foret9 ->sprite, global->foret9->position);
    sfSprite_setPosition(menu->transition1->sprite,
    menu->transition1->position);
}

void rect_select_sprites(window_t *global, menu_t *menu,
    select_player_t *select)
{
    use_clock(select);
    create_score(select);
    sfSprite_setTextureRect(global->foret1->sprite, global->foret1->rect);
    sfSprite_setTextureRect(global->foret2->sprite, global->foret2->rect);
    sfSprite_setTextureRect(global->foret3->sprite, global->foret3->rect);
    sfSprite_setTextureRect(global->foret4->sprite, global->foret4->rect);
    sfSprite_setTextureRect(global->foret6->sprite, global->foret6->rect);
    sfSprite_setTextureRect(global->foret7->sprite, global->foret7->rect);
    sfSprite_setTextureRect(global->foret8->sprite, global->foret8->rect);
    sfSprite_setTextureRect(global->foret9->sprite, global->foret9->rect);
    sfSprite_setTextureRect(menu->transition1->sprite,
                            menu->transition1->rect);
    sfSprite_setTextureRect(global->character->sprite,
                            global->character->rect);
}

void draw_select_sprites(window_t *global, menu_t *menu,
    select_player_t *select)
{
    anime_foret1(global);
    anime_foret2(global);
    anime_foret3(global);
    anime_foret4(global);
    anime_foret6(global);
    anime_foret7(global);
    anime_foret9(global);
    anime_transition1(menu);
    sfRenderWindow_drawSprite(global->window, global->foret7->sprite, NULL);
    sfRenderWindow_drawSprite(global->window, global->foret8->sprite, NULL);
    sfRenderWindow_drawSprite(global->window, global->foret9->sprite, NULL);
    sfRenderWindow_drawSprite(global->window, menu->transition1->sprite, NULL);
    sfRenderWindow_drawSprite(global->window, select->bat->sprite, NULL);
    sfRenderWindow_drawSprite(global->window, select->wolf->sprite, NULL);
    sfRenderWindow_drawSprite(global->window, global->character->sprite, NULL);
    sfRenderWindow_drawText(global->window, select->score_text, NULL);
}

void select_menu(window_t *global, menu_t *menu, select_player_t *select)
{
    sfEvent event;

    global->event = &event;
    create_select_sprites(global, menu, select);
    set_select_sprites(global, menu);
    while (global->game_status == 1) {
        sfRenderWindow_clear(global->window, sfBlack);
        while (sfRenderWindow_pollEvent(global->window, global->event)) {
            if (global->event->type == sfEvtClosed) {
                sfRenderWindow_close(global->window);
                return;
            }
            attack_status(global, select);
        }
        complete__select(global, menu, select);
        complete_select_loop(global, menu, select);
        draw_select_sprites(global, menu, select);
        sfRenderWindow_display(global->window);
    }
    sfRenderWindow_destroy(global->window);
}
