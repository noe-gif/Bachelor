/*
** EPITECH PROJECT, 2020
** position
** File description:
** menu_sprites
*/

#include "prototypes.h"
#include "defender.h"

void set_scale(menu_t *menu)
{
    sfSprite_setScale(menu->quit_button->sprite,
    menu->quit_scale);
    sfSprite_setScale(menu->mute_button->sprite,
    menu->mute_scale);
    sfSprite_setScale(menu->esc_button->sprite,
    menu->esc_scale);
    sfSprite_setScale(menu->home_button->sprite,
    menu->home_scale);
    sfSprite_setScale(menu->mute_logo->sprite,
    menu->mute_logo_scale);
}

void set_menu_other_positions(menu_t *menu)
{
    sfSprite_setPosition(menu->mute_logo->sprite,
    menu->mute_logo->position);
    sfSprite_setPosition(menu->menu_smoke->sprite,
    menu->menu_smoke->position);
    sfSprite_setPosition(menu->menu_title_effect->sprite,
    menu->menu_title_effect->position);
}

void set_menu_positions(menu_t *menu)
{
    sfSprite_setPosition(menu->menu_background->sprite,
    menu->menu_background->position);
    sfSprite_setPosition(menu->menu_transition->sprite,
    menu->menu_transition->position);
    sfSprite_setPosition(menu->menu_transition2->sprite,
    menu->menu_transition2->position);
    sfSprite_setPosition(menu->param_background->sprite,
    menu->param_background->position);
    sfSprite_setPosition(menu->start_button->sprite,
    menu->start_button->position);
    sfSprite_setPosition(menu->param_button->sprite,
    menu->param_button->position);
    sfSprite_setPosition(menu->quit_button->sprite,
    menu->quit_button->position);
    sfSprite_setPosition(menu->mute_button->sprite,
    menu->mute_button->position);
    sfSprite_setPosition(menu->esc_button->sprite,
    menu->esc_button->position);
    sfSprite_setPosition(menu->home_button->sprite,
    menu->home_button->position);
    set_menu_other_positions(menu);
}

void set_menu_other_rec(menu_t *menu)
{
    sfSprite_setTextureRect(menu->mute_logo->sprite,
    menu->mute_logo->rect);
    sfSprite_setTextureRect(menu->menu_title_effect->sprite,
    menu->menu_title_effect->rect);
    sfSprite_setTextureRect(menu->menu_smoke->sprite,
    menu->menu_smoke->rect);
}

void set_menu_rect(menu_t *menu)
{
    sfSprite_setTextureRect(menu->menu_background->sprite,
    menu->menu_background->rect);
    sfSprite_setTextureRect(menu->menu_transition->sprite,
    menu->menu_transition->rect);
    sfSprite_setTextureRect(menu->menu_transition2->sprite,
    menu->menu_transition2->rect);
    sfSprite_setTextureRect(menu->start_button->sprite,
    menu->start_button->rect);
    sfSprite_setTextureRect(menu->param_background->sprite,
    menu->param_background->rect);
    sfSprite_setTextureRect(menu->param_button->sprite,
    menu->param_button->rect);
    sfSprite_setTextureRect(menu->quit_button->sprite, menu->quit_button->rect);
    sfSprite_setTextureRect(menu->mute_button->sprite, menu->mute_button->rect);
    sfSprite_setTextureRect(menu->esc_button->sprite, menu->esc_button->rect);
    sfSprite_setTextureRect(menu->home_button->sprite, menu->home_button->rect);
    set_menu_other_rec(menu);
    set_scale(menu);
}
