/*
** EPITECH PROJECT, 2020
** window
** File description:
** global
*/

#include <stdlib.h>
#include "defender.h"
#include "prototypes.h"

sfRenderWindow *create_window(sfRenderWindow *window,  sfVideoMode mode)
{
    window = sfRenderWindow_create(mode, "My_runner, epitech project",
    sfResize | sfClose, NULL);
    return (window);
}

void set_window(window_t *global)
{
    sfVideoMode mode = {1200, 675, 32};
    global->window = create_window(global->window, mode);
}
