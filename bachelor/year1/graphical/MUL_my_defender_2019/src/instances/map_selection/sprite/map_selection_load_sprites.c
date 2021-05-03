/*
** EPITECH PROJECT, 2020
** menu_sprite
** File description:
** defender
*/

#include "prototypes.h"
#include "defender.h"
#include <stdlib.h>

void create_map_selection_background(window_t *global)
{
    char *png = "resources/pictures/menu/SELECTION_BACKGROUND.png";

    global->map_selection_management->map_selection_background =
    malloc(sizeof(sprite_t));
    global->map_selection_management->map_selection_background->sprite
    = sfSprite_create();
    global->map_selection_management->map_selection_background->texture =
    create_texture(global->map_selection_management->
    map_selection_background->texture, png);
    global->map_selection_management->map_selection_background->rect =
    create_size_rect(global->map_selection_management->
    map_selection_background->rect, 1200, 675);
    global->map_selection_management->map_selection_background->rect =
    create_side_rect(global->map_selection_management->
    map_selection_background->rect, 0, 0);
    background(global);
}

void create_map_selection_hardmap_icon(window_t *global)
{
    char *png = "resources/pictures/map/HARD_MAP.png";

    global->map_selection_management->hardmap_icon_scale.x = 1;
    global->map_selection_management->hardmap_icon_scale.y = 1;
    global->map_selection_management->map_selection_hardmap_icon =
    malloc(sizeof(sprite_t));
    global->map_selection_management->map_selection_hardmap_icon->sprite =
    sfSprite_create();
    global->map_selection_management->map_selection_hardmap_icon->texture =
    create_texture(global->map_selection_management->
    map_selection_hardmap_icon->texture, png);
    global->map_selection_management->map_selection_hardmap_icon->rect =
    create_size_rect(global->map_selection_management->
    map_selection_hardmap_icon->rect, 2000, 770);
    global->map_selection_management->map_selection_hardmap_icon->rect =
    create_side_rect(global->map_selection_management->
    map_selection_hardmap_icon->rect, 500, 500);
    sfSprite_setScale(global->map_selection_management->
    map_selection_hardmap_icon->sprite,
    global->map_selection_management->hardmap_icon_scale);
    hardmap_icon(global);
}

void create_map_selection_right_arrow(window_t *global)
{
    char *png = "resources/pictures/menu/WOOD_BUTTON.png";

    global->map_selection_management->right_arrow_scale.x = 0.4;
    global->map_selection_management->right_arrow_scale.y = 0.4;
    global->map_selection_management->map_selection_right_arrow =
    malloc(sizeof(sprite_t));
    global->map_selection_management->
    map_selection_right_arrow->sprite = sfSprite_create();
    global->map_selection_management->map_selection_right_arrow->texture =
    create_texture(global->map_selection_management->
    map_selection_right_arrow->texture, png);
    global->map_selection_management->map_selection_right_arrow->rect =
    create_size_rect(global->map_selection_management->
    map_selection_right_arrow->rect, 300, 250);
    global->map_selection_management->map_selection_right_arrow->rect =
    create_side_rect(global->map_selection_management->
    map_selection_right_arrow->rect, 200, 260);
    right_arrow(global);
}

void create_map_selection_left_arrow(window_t *global)
{
    char *png = "resources/pictures/menu/WOOD_BUTTON.png";

    global->map_selection_management->left_arrow_scale.x = 0.4;
    global->map_selection_management->left_arrow_scale.y = 0.4;
    global->map_selection_management->map_selection_left_arrow =
    malloc(sizeof(sprite_t));
    global->map_selection_management->
    map_selection_left_arrow->sprite = sfSprite_create();
    global->map_selection_management->map_selection_left_arrow->texture =
    create_texture(global->map_selection_management->
    map_selection_left_arrow->texture, png);
    global->map_selection_management->map_selection_left_arrow->rect =
    create_size_rect(global->map_selection_management->
    map_selection_left_arrow->rect, 300, 250);
    global->map_selection_management->map_selection_left_arrow->rect =
    create_side_rect(global->map_selection_management->
    map_selection_left_arrow->rect, 200, -20);
    left_arrow(global);
}
