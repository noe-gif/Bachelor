/*
** EPITECH PROJECT, 2019
** struct
** File description:
** struct
*/

#include "defender.h"
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Font.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/Graphics/Text.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include <SFML/Audio/Export.h>
#include <SFML/Audio/SoundStatus.h>
#include <SFML/Audio/Types.h>
#include <SFML/System/InputStream.h>
#include <SFML/System/Time.h>
#include <SFML/System/Vector3.h>
#include <stddef.h>
#include <time.h>

#ifndef PROTO
#define PROTO


/*
** ################################################################
**                             SPRITES_FUNCTION
** ################################################################
*/

sfTexture *create_texture(sfTexture *texture, char *png);
sfIntRect create_size_rect(sfIntRect rect, int width, int height);
sfIntRect create_side_rect(sfIntRect rect, int top, int left);
sfVector2f create_position(sfVector2f position, int x, int y);
sfVector2f create_scale(sfVector2f scale, int x, int y);

/*
** ################################################################
**                             SET_WINDOW
** ################################################################
*/

void set_window(window_t *global);

/*
** ################################################################
**                             LINKED_LISTS
** ################################################################
*/

monkey_t *create_monkey_node(window_t *global);
void add_node_in_list (monkey_t **head, monkey_t *new_elem);
void display_monkeys(window_t *global, monkey_t *list);
void delete_list (monkey_t **head);
void delete_node (monkey_t **list, monkey_t *node);
baloon_t *create_baloons_node(window_t *global);
void add_baloons_in_list (baloon_t **head, baloon_t *new_elem);
void display_baloons(window_t *global, baloon_t *list);
void delete_list_baloons (baloon_t **head);
void delete_node_baloons (baloon_t **list, baloon_t *node);
monkey_t *create_sorcer_node(window_t *global);
monkey_t *create_sniper_node(window_t *global);
monkey_t *create_boat_node(window_t *global);
monkey_t *create_ice_node(window_t *global);

/*
** ################################################################
**                             WINDOW
** ################################################################
*/

void set_window(window_t *global);
sfRenderWindow *create_window(sfRenderWindow *window,  sfVideoMode mode);
void get_window_size(window_t *global);

/*
** ################################################################
**                             CLOCK
** ################################################################
*/

void create_clock(window_t *global);
void start_clock(window_t *global);

/*
** ################################################################
**                             MUSIC
** ################################################################
*/

void create_menu_music(window_t *global);
void start_menu_music(window_t *global);

/*
** ################################################################
**                             MENU
** ################################################################
*/

void menu_loop(window_t *global, menu_t *menu);
void menu_event_loop(menu_t *menu, window_t *global);
void create_menu_background(menu_t *menu);
void draw_menu_sprite(menu_t *menu, window_t *global);
void set_menu_positions(menu_t *menu);
void set_menu_rect(menu_t *menu);
void anime_transition1(menu_t *menu);
void create_menu_transition(menu_t *menu);
void create_menu_start_button(menu_t *menu);
void is_touched_start_hitbox(menu_t *menu, window_t *global, sfEvent event);
void draw_transi_2(menu_t *menu, window_t *global);
void anime_transition2(menu_t *menu);
void create_menu_transition_2(menu_t *menu);
void create_menu_param_button(menu_t *menu);
void is_touched_param_hitbox(menu_t *menu, window_t *global, sfEvent event);
void create_param_background(menu_t *menu);
void create_menu_quit_button(menu_t *menu);
void is_touched_quit_hitbox(menu_t *menu, window_t *global);
void create_menu_mute_button(menu_t *menu);
void is_touched_mute_hitbox(menu_t *menu, window_t *global);
void create_menu_esc_button(menu_t *menu);
void is_touched_esc_hitbox(menu_t *menu, window_t *global);
void create_menu_home_button(menu_t *menu);
void is_touched_home_hitbox(menu_t *menu, window_t *global);
void create_menu_mute_logo(menu_t *menu);
void create_menu_title_effect(menu_t *menu);
void anime_menu_title_effect(menu_t *menu);
void draw_parameter_sprites(menu_t *menu, window_t *global);
void create_menu_smoke(menu_t *menu);
void anime_smoke(menu_t *menu);
void if_start_hitbox_touched(menu_t *menu, window_t *global);
void if_param_hitbox_touched(menu_t *menu, window_t *global);
void is_touched_mute_hitbox(menu_t *menu, window_t *global);
void is_touched_esc_hitbox(menu_t *menu, window_t *global);
void if_mute_hitbox_touched(menu_t *menu, window_t *global);

/*
** ################################################################
**                             MAP_SELECTION
** ################################################################
*/

void create_map_selection_background(window_t *global);
void draw_map_selection_sprite(menu_t *menu, window_t *global);
void map_selection_loop(window_t *global, menu_t *menu);
void create_map_selection_hardmap_icon(window_t *global);
void set_map_selection_scale(window_t *global);
void set_map_selection_positions(window_t *global);
void set_map_selection_rect(window_t *global);
void map_selection_event_loop(window_t *global, menu_t *menu);
void is_touched_hardmap_hitbox(window_t *global);
void create_map_selection_right_arrow(window_t *global);
void create_map_selection_left_arrow(window_t *global);
void is_touched_right_arrow_hitbox(window_t *global, sfEvent event);
void is_touched_left_arrow_hitbox(window_t *global, sfEvent event);
void anime_transition3(window_t *global);
void left_arrow(window_t *global);
void right_arrow(window_t *global);
void hardmap_icon(window_t *global);
void background(window_t *global);

/*
** ################################################################
**                             GAME
** ################################################################
*/

void game_hardmap_loop(window_t *global, menu_t *menu);
void game_easymap_loop(window_t *global);
void draw_game_sprite(menu_t *menu, window_t *global);
void game_event_loop(window_t *global, menu_t *menu);
void create_hard_map(window_t *global);
void set_game_scale(window_t *global, menu_t *menu);
void set_game_positions(window_t *global);
void set_game_rect(window_t *global, menu_t *menu);
void anime_transition3(window_t *global);
void create_transition3(window_t *global);
void create_turret_monkey_simple_button(window_t *global);
void create_turret_monkey_sorcer_button(window_t *global);
void create_turret_monkey_sniper_button(window_t *global);
void create_turret_monkey_boat_button(window_t *global);
void create_turret_monkey_ice_button(window_t *global);
void is_touched_simple_monkey_button_hitbox(window_t *global);
void is_touched_sorcer_monkey_button_hitbox(window_t *global);
void is_touched_sniper_monkey_button_hitbox(window_t *global);
void is_touched_boat_monkey_button_hitbox(window_t *global);
void is_touched_ice_monkey_button_hitbox(window_t *global);
void place_selected_turret(window_t *global);
void create_turret_monkey_simple(window_t *global);
void create_turret_monkey_sorcer(window_t *global);
void create_turret_monkey_sniper(window_t *global);
void create_turret_monkey_boat(window_t *global);
void create_turret_monkey_ice(window_t *global);
void place_sorcer(window_t *global);
void place_sniper(window_t *global);
void place_boat(window_t *global);
void place_ice(window_t *global);
void draw_turrets(window_t *global);
void create_range_circle(window_t *global);
void anime_ice_turret(window_t *global);
void boat_complete(window_t *global);
void ice_complete(window_t *global);
void create_turret_monkey_ice(window_t *global);
void sniper_complete(window_t *global);
void draw_other_turrets(window_t *global);
void turret_drawing(window_t *global);
void draw_turrets(window_t *global);
void draw_game_sprite(menu_t *menu, window_t *global);
void draw_last_turrets(window_t *global);
void draw_in_game_sprite(menu_t *menu, window_t *global);
void simple_monkey_button(window_t *global);
void sorcer_monkey_button(window_t *global);
void sniper_monkey_button(window_t *global);
void boat_monkey_button(window_t *global);
void ice_monkey_button(window_t *global);
void is_monkey_simple_right_place(window_t *global);
void is_monkey_sorcer_right_place(window_t *global);
void is_monkey_sniper_right_place(window_t *global);
void is_monkey_ice_right_place(window_t *global);

/*
** ################################################################
**                             TEXT
** ################################################################
*/

void clock_text_create(window_t *global);
void draw_game_text(window_t *global);
void money_text_create(window_t *global);
void lives_text_create(window_t *global);
void waves_text_create(window_t *global);
void countdown_text_create(window_t *global);

#endif /* PROTO  */
