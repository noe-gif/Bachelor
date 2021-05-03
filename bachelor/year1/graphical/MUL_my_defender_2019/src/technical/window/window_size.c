/*
** EPITECH PROJECT, 2020
** window_size
** File description:
** defender
*/

#include "defender.h"
#include "my.h"
#include "prototypes.h"

void get_window_size(window_t *global)
{
    global->size_x = sfRenderWindow_getSize(global->window).x;
    global->size_y = sfRenderWindow_getSize(global->window).y;
}
