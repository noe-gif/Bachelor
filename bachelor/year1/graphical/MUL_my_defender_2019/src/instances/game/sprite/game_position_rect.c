/*
** EPITECH PROJECT, 2020
** position
** File description:
** menu_sprites
*/

#include "prototypes.h"
#include "defender.h"

void set_other_positions(window_t *global)
{
    sfSprite_setPosition(global->game_management->
    turret_monkey_boat->sprite,
    global->game_management->turret_monkey_boat->position);
    sfSprite_setTextureRect(global->game_management->
    turret_monkey_boat->sprite,
    global->game_management->turret_monkey_boat->rect);
    sfSprite_setPosition(global->game_management->
    turret_monkey_ice->sprite,
    global->game_management->turret_monkey_ice->position);
    sfSprite_setTextureRect(global->game_management->
    turret_monkey_ice->sprite,
    global->game_management->turret_monkey_ice->rect);
    sfSprite_setPosition(global->game_management->
    range_circle->sprite,
    global->game_management->range_circle->position);
    sfSprite_setTextureRect(global->game_management->
    range_circle->sprite,
    global->game_management->range_circle->rect);
}

void set_game_other_scales(window_t *global)
{
    sfSprite_setPosition(global->game_management->
    turret_monkey_simple->sprite,
    global->game_management->turret_monkey_simple->position);
    sfSprite_setTextureRect(global->game_management->
    turret_monkey_simple->sprite,
    global->game_management->turret_monkey_simple->rect);
    sfSprite_setPosition(global->game_management->
    turret_monkey_sorcer->sprite,
    global->game_management->turret_monkey_sorcer->position);
    sfSprite_setTextureRect(global->game_management->
    turret_monkey_sorcer->sprite,
    global->game_management->turret_monkey_sorcer->rect);
    sfSprite_setPosition(global->game_management->
    turret_monkey_sniper->sprite,
    global->game_management->turret_monkey_sniper->position);
    sfSprite_setTextureRect(global->game_management->
    turret_monkey_sniper->sprite,
    global->game_management->turret_monkey_sniper->rect);
    set_other_positions(global);
}

void set_game_scale(window_t *global, menu_t *menu)
{
    sfSprite_setTextureRect(menu->quit_button->sprite, menu->quit_button->rect);
    sfSprite_setTextureRect(menu->mute_button->sprite, menu->mute_button->rect);
    sfSprite_setTextureRect(menu->esc_button->sprite, menu->esc_button->rect);
    sfSprite_setTextureRect(menu->home_button->sprite, menu->home_button->rect);
    sfSprite_setTextureRect(global->game_management->transition3->sprite,
    global->game_management->transition3->rect);
    sfSprite_setTextureRect(global->game_management->
    turret_monkey_sorcer_button->sprite,
    global->game_management->turret_monkey_sorcer_button->rect);
    sfSprite_setTextureRect(global->game_management->
    turret_monkey_sniper_button->sprite,
    global->game_management->turret_monkey_sniper_button->rect);
    sfSprite_setTextureRect(global->game_management->
    turret_monkey_boat_button->sprite,
    global->game_management->turret_monkey_boat_button->rect);
    sfSprite_setTextureRect(global->game_management->
    turret_monkey_ice_button->sprite,
    global->game_management->turret_monkey_ice_button->rect);
    sfSprite_setTextureRect(menu->param_button->sprite,
    menu->param_button->rect);
    set_game_other_scales(global);
}

void set_game_positions(window_t *global)
{
    sfSprite_setPosition(global->game_management->
    turret_monkey_simple_button->sprite,
    global->game_management->turret_monkey_simple_button->position);
    sfSprite_setPosition(global->game_management->
    turret_monkey_ice_button->sprite,
    global->game_management->turret_monkey_ice_button->position);
    sfSprite_setPosition(global->game_management->
    turret_monkey_boat_button->sprite,
    global->game_management->turret_monkey_boat_button->position);
    sfSprite_setPosition(global->game_management->
    turret_monkey_sniper_button->sprite,
    global->game_management->turret_monkey_sniper_button->position);
    sfSprite_setPosition(global->game_management->
    turret_monkey_sorcer_button->sprite,
    global->game_management->turret_monkey_sorcer_button->position);
    sfSprite_setPosition(global->game_management->hardmap->sprite,
    global->game_management->hardmap->position);
    sfSprite_setPosition(global->game_management->transition3->sprite,
    global->game_management->transition3->position);
    set_other_positions(global);
}

void set_game_rect(window_t *global, menu_t *menu)
{
    sfSprite_setTextureRect(global->game_management->
    turret_monkey_simple_button->sprite,
    global->game_management->turret_monkey_simple_button->rect);
    sfSprite_setTextureRect(global->map_selection_management->
    map_selection_background->sprite,
    global->map_selection_management->map_selection_background->rect);
    sfSprite_setTextureRect(global->map_selection_management->
    map_selection_hardmap_icon->sprite,
    global->map_selection_management->map_selection_hardmap_icon->rect);
    sfSprite_setTextureRect(global->map_selection_management->
    map_selection_right_arrow->sprite,
    global->map_selection_management->map_selection_right_arrow->rect);
    sfSprite_setTextureRect(global->map_selection_management->
    map_selection_left_arrow->sprite,
    global->map_selection_management->map_selection_left_arrow->rect);
    sfSprite_setTextureRect(global->game_management->hardmap->sprite,
    global->game_management->hardmap->rect);
    set_game_scale(global, menu);
}
