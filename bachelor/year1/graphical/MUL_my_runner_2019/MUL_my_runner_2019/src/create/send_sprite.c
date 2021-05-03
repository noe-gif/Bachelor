/*
** EPITECH PROJECT, 2019
** runner
** File description:
** send to window
*/

#include "../../include/runner.h"

void call_other_create_functions(menu_t *menu)
{
    create_menu1(menu);
    create_menu2(menu);
    create_menu3(menu);
    create_menu4(menu);
    menu_title(menu);
    create_transition1(menu);
    create_button(menu);
}

void rect_sprites(window_t *global, menu_t *menu)
{
    sfSprite_setTextureRect(global->character->sprite, global->character->rect);
    sfSprite_setTextureRect(global->foret1->sprite, global->foret1->rect);
    sfSprite_setTextureRect(global->foret2->sprite, global->foret2->rect);
    sfSprite_setTextureRect(global->foret3->sprite, global->foret3->rect);
    sfSprite_setTextureRect(global->foret4->sprite, global->foret4->rect);
    sfSprite_setTextureRect(global->foret6->sprite, global->foret6->rect);
    sfSprite_setTextureRect(global->foret7->sprite, global->foret7->rect);
    sfSprite_setTextureRect(global->foret8->sprite, global->foret8->rect);
    sfSprite_setTextureRect(menu->menu1->sprite, menu->menu1->rect);
    sfSprite_setTextureRect(menu->menu2->sprite, menu->menu2->rect);
    sfSprite_setTextureRect(menu->menu3->sprite, menu->menu3->rect);
    sfSprite_setTextureRect(menu->menu4->sprite, menu->menu4->rect);
    sfSprite_setTextureRect(menu->transition1->sprite, menu->transition1->rect);
    sfSprite_setTextureRect(menu->button->sprite, menu->button->rect);
    sfSprite_setTextureRect(menu->button2->sprite, menu->button2->rect);
}

void set_position_sprites(window_t *global, menu_t *menu)
{
    sfSprite_setPosition(global->foret1->sprite, global->foret1->position);
    sfSprite_setPosition(global->foret2->sprite, global->foret2->position);
    sfSprite_setPosition(global->foret3->sprite, global->foret3->position);
    sfSprite_setPosition(global->foret4->sprite, global->foret4->position);
    sfSprite_setPosition(global->foret6->sprite, global->foret6->position);
    sfSprite_setPosition(global->foret7->sprite, global->foret7->position);
    sfSprite_setPosition(global->foret8->sprite, global->foret8->position);
    sfSprite_setPosition(menu->menu1->sprite, menu->menu1->position);
    sfSprite_setPosition(menu->menu2->sprite, menu->menu2->position);
    sfSprite_setPosition(menu->menu3->sprite, menu->menu3->position);
    sfSprite_setPosition(menu->menu4->sprite, menu->menu4->position);
    sfSprite_setPosition(menu->transition1->sprite,
    menu->transition1->position);
    sfSprite_setPosition(menu->button->sprite, menu->button->position);
    sfSprite_setPosition(menu->button2->sprite, menu->button2->position);
    sfSprite_setPosition(global->character->sprite,
    global->character->position);
}

sfRenderWindow *create_window(sfRenderWindow *window,  sfVideoMode mode)
{
    window = sfRenderWindow_create(mode, "My_runner, epitech project",
    sfResize | sfClose, NULL);
    return (window);
}
