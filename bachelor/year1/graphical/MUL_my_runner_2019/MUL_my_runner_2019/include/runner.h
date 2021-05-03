/*
** EPITECH PROJECT, 2019
** struct
** File description:
** struct
*/

#ifndef STRUCT
#define STRUCT

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

typedef struct sprite_s
{
    sfTexture *texture;
    sfSprite *sprite;
    sfIntRect rect;
    sfVector2f scale;
    sfVector2f position;
}sprite_t;

typedef struct select_player_s
{
    int number;
    int left_status;
    int right_status;
    sprite_t *bat;
    sprite_t *wolf;
    sfClock* clock;
    sfMusic* music;
    sfText *score_text;
    int score;
    sfFont *score_font;
    sfVector2f score_position;
    sfTime time;
    float seconds;
    int i;
}select_player_t;

typedef struct menu_s
{
    sprite_t *menu1;
    sprite_t *menu2;
    sprite_t *menu3;
    sprite_t *menu4;
    sfText *title;
    sfVector2f title_position;
    sfFont *title_font;
    sfVector2f play_button_position;
    sfFont *play_button_font;
    sfText *play_button;
    sfVector2f quit_button_position;
    sfFont *quit_button_font;
    sfText *quit_button;
    sprite_t *menu_boss;
    sprite_t *menu_ennemy;
    sprite_t *transition1;
    sprite_t *button;
    sprite_t *button2;
    int menu_status;
}menu_t;

typedef struct window_s
{
    sfRenderWindow *window;
    sfEvent *event;
    sprite_t *foret1;
    sprite_t *foret2;
    sprite_t *foret3;
    sprite_t *foret4;
    sprite_t *foret6;
    sprite_t *foret7;
    sprite_t *foret8;
    sprite_t *foret9;
    sprite_t *character;
    sprite_t *ennemy;
    sfVideoMode mode;
    int time;
    int jump;
    int current_view;
    int attack_status;
    int game_status;
}window_t;

void create_foret1(window_t *global);
void create_foret2(window_t *global);
void create_foret3(window_t *global);
void create_foret4(window_t *global);
void create_foret6(window_t *global);
void create_foret7(window_t *global);
void create_foret8(window_t *global);
void create_foret9(window_t *global);
void create_menu1(menu_t *menu);
void create_menu2(menu_t *menu);
void create_menu3(menu_t *menu);
void create_menu4(menu_t *menu);
void create_ennemy(window_t *global);
void create_character(window_t *global);
void create_menu_ennemy(menu_t *menu);
void create_menu_boss(menu_t *menu);
void create_transition1(menu_t *menu);
void create_button(menu_t *menu);
void create_button2(menu_t *menu);
void create_bat(select_player_t *select);
void create_wolf(select_player_t *select);
void create_score(select_player_t *select);
void anime_wolf(select_player_t *select);
void anime_bat(select_player_t *select);
void anime_foret1(window_t *global);
void anime_foret2(window_t *global);
void anime_foret3(window_t *global);
void anime_foret4(window_t *global);
void anime_foret6(window_t *global);
void anime_foret6(window_t *global);
void anime_foret7(window_t *global);
void anime_foret9(window_t *global);
void anime_ennemy(window_t *global);
void anime_character(window_t *global,
    select_player_t *select);
void anime_menu4(menu_t *menu);
void anime_menu3(menu_t *menu);
void anime_menu2(menu_t *menu);
void anime_menu1(menu_t *menu);
void anime_menu_ennemy(menu_t *menu);
void anime_menu_boss(menu_t *menu);
void anime_transition1(menu_t *menu);
void reset_transition1(window_t *global, menu_t *menu);
sfRenderWindow *create_window(sfRenderWindow *window,
    sfVideoMode mode);
void draw_menu_sprites(window_t *global, menu_t *menu);
void anime_sprites(menu_t *menu);
void complete_main(window_t *global,
    menu_t *menu, select_player_t *select);
sfSprite *create_sprite(sfSprite *sprite);
sfTexture *create_texture(sfTexture *texture, char *png);
sfIntRect create_rect(sfIntRect rect, int top,
    int left, int width, int height);
sfVector2f create_position(sfVector2f position, int x, int y);
void rect_sprites(window_t *global, menu_t *menu);
sfRenderWindow *create_window(sfRenderWindow *window,
    sfVideoMode mode);
sfVector2f create_scale(sfVector2f scale, int x, int y);
void set_position_sprites(window_t *global, menu_t *menu);
void call_create_sprites_functions(window_t *global, menu_t *menu,
    select_player_t *select);
void call_other_create_functions(menu_t *menu);
void create_clock(select_player_t *select);
void use_clock(select_player_t *select);
void complete__select(window_t *global, menu_t *menu,
    select_player_t *select);
void draw_select_sprites(window_t *global, menu_t *menu,
    select_player_t *select);
void character_jump(window_t **global);
void attack_status(window_t *global, select_player_t *select);
void player_attack(window_t *global);
void left_deplacement(window_t *global);
void right_deplacement(window_t *global);
void hitbox_ennemy(select_player_t *select, window_t *global);

void event_loop(window_t *global, menu_t *menu);
void check_menu_status(window_t *global, menu_t *menu);
void arrow_key(window_t *global, select_player_t *select);
void select_menu(window_t *global, menu_t *menu,
    select_player_t *select);
void complete_select_loop(window_t *global, menu_t *menu,
    select_player_t *select);
void rect_select_sprites(window_t *global, menu_t *menu,
    select_player_t *select);
void set_select_sprites(window_t *global, menu_t *menu);
void create_select_sprites(window_t *global, menu_t *menu,
    select_player_t *select);
void create_title(menu_t *menu);
void menu_title(menu_t *menu);
void draw_text(menu_t *menu, window_t *global);
void quit_button(menu_t *menu);
void play_button(menu_t *menu);
void click_button_play(window_t *global,
    sfMouseButtonEvent event, menu_t *menu);
void click_button_quit(window_t *global,
    sfMouseButtonEvent event, menu_t *menu);
#endif /* STRUCT  */
