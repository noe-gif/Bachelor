/*
** EPITECH PROJECT, 2019
** my_hunter
** File description:
** set_sprites
*/

#include "../../include/runner.h"

sfSprite *create_sprite(sfSprite *sprite)
{
    sprite = sfSprite_create();
    return (sprite);
}

sfTexture *create_texture(sfTexture *texture, char *png)
{
    texture = sfTexture_createFromFile(png, NULL);
    return (texture);
}

sfIntRect create_rect(sfIntRect rect, int top,
    int left, int width, int height)
{
    rect.top = top;
    rect.left = left;
    rect.width = width;
    rect.height = height;
    return (rect);
}

sfVector2f create_position(sfVector2f position, int x, int y)
{
    position.x = x;
    position.y = y;
    return (position);
}

sfVector2f create_scale(sfVector2f scale, int x, int y)
{
    scale.x = x;
    scale.y = y;
    return (scale);
}
