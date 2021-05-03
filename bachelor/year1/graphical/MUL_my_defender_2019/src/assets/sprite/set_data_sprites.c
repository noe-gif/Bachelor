/*
** EPITECH PROJECT, 2020
** set_data to sprites
** File description:
** defender
*/

#include "defender.h"
#include "prototypes.h"
#include "my.h"

sfTexture *create_texture(sfTexture *texture, char *png)
{
    texture = sfTexture_createFromFile(png, NULL);
    return (texture);
}

sfIntRect create_size_rect(sfIntRect rect, int width, int height)
{
    rect.width = width;
    rect.height = height;
    return (rect);
}

sfIntRect create_side_rect(sfIntRect rect, int top, int left)
{
    rect.top = top;
    rect.left = left;
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
