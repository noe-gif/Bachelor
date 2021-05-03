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
#include <unistd.h>
#include <SFML/Graphics.h>
#include <time.h>
#include <stdio.h>
#include <stddef.h>

typedef struct sprite_s
{
    sfTexture *texture;
    sfSprite *sprite;
    sfIntRect rect;
    sfVector2f scale;
    sfVector2f position;
}sprite_t;

typedef struct sound_s
{
    sfMusic *menu_music;
    sfBool menu_music_loop;
    int mute;
}sound_t;

typedef struct menu_s
{
    sprite_t *menu_background;
    sprite_t *menu_transition;
    sprite_t *menu_transition2;
    sprite_t *menu_title_effect;
    sprite_t *start_button;
    sprite_t *mute_button;
    sprite_t *param_button;
    sprite_t *quit_button;
    sprite_t *esc_button;
    sprite_t *home_button;
    sprite_t *param_background;
    sprite_t *mute_logo;
    sprite_t *menu_smoke;
    sfVector2f quit_scale;
    sfVector2f mute_scale;
    sfVector2f mute_logo_scale;
    sfVector2f esc_scale;
    sfVector2f home_scale;
    int end_transi2;
    int start_selection;
    int effect_value;
    int home_event;
    int start_home;
    int start_event_game;
    int start_event;
    int param_event;
    int param_event_button;
    int background_value;
    int transition2_value;
    int mute_sound;
}menu_t;

typedef struct game_s
{
    sprite_t *hardmap;
    sprite_t *transition3;
    sprite_t *turret_monkey_simple_button;
    sprite_t *turret_monkey_sorcer_button;
    sprite_t *turret_monkey_sniper_button;
    sprite_t *turret_monkey_boat_button;
    sprite_t *turret_monkey_ice_button;
    sprite_t *turret_monkey_simple;
    sprite_t *turret_monkey_sorcer;
    sprite_t *turret_monkey_sniper;
    sprite_t *turret_monkey_boat;
    sprite_t *turret_monkey_ice;
    sprite_t *range_circle;
    int monkey_simple_chosen;
    int monkey_sorcer_chosen;
    int monkey_sniper_chosen;
    int monkey_boat_chosen;
    int monkey_ice_chosen;
    int is_turret_placed;
    int money;
    int lives;
    int waves;
    int countdown;
    int timer;
    int isnt_enough;
    int bad_placement;
}game_t;

typedef struct map_selection_s
{
    sprite_t *map_selection_background;
    sprite_t *map_selection_hardmap_icon;
    sprite_t *map_selection_right_arrow;
    sprite_t *map_selection_left_arrow;
    sfVector2f hardmap_icon_scale;
    sfVector2f right_arrow_scale;
    sfVector2f left_arrow_scale;
    int hardmap_chosen_event;
    int right_arrow_chosen_event;
    int left_arrow_chosen_event;
    int hardmap_icon_event;
    int easymap_icon_event;
    int start_play_hardmap;
    int start_play_easymap;
}map_selection_t;

typedef struct clock_management_s
{
    sfTime time;
    float seconds;
    sfClock* clock;
    int minutes;
}clock_management_t;

typedef struct text_s
{
    char *time_string;
    sfText *time_text;
    sfFont *time_text_font;
    sfVector2f time_text_position;
    char *money_string;
    sfText *money_text;
    sfFont *money_text_font;
    sfVector2f money_text_position;
    char *lives_string;
    sfText *lives_text;
    sfFont *lives_text_font;
    sfVector2f lives_text_position;
    char *waves_string;
    sfText *waves_text;
    sfFont *waves_text_font;
    sfVector2f waves_text_position;
    char *countdown_string;
    sfText *countdown_text;
    sfFont *countdown_text_font;
    sfVector2f countdown_text_position;
}text_t;

typedef struct monkey_s
{
    sfTexture *texture;
    sfSprite *sprite;
    sfIntRect rect;
    sfVector2f scale;
    sfVector2f position;
    struct monkey_s *next;
    struct monkey_s *prev;
}monkey_t;

typedef struct baloon_s
{
    sfTexture *texture;
    sfSprite *sprite;
    sfIntRect rect;
    sfVector2f scale;
    sfVector2f position;
    int timer;
    int life;
    struct baloon_s *next;
    struct baloon_s *prev;
}baloon_t;

typedef struct window_s
{
    sfRenderWindow *window;
    int size_x;
    int size_y;
    sfEvent *event;
    sfEvent *event_map_selection;
    sfVideoMode mode;
    clock_management_t *clock_management;
    sound_t *sound_management;
    map_selection_t *map_selection_management;
    game_t *game_management;
    text_t *text_management;
    baloon_t *node_baloons;
    baloon_t *list_baloons;
    monkey_t *node;
    monkey_t *list;
}window_t;

#endif /* STRUCT  */
