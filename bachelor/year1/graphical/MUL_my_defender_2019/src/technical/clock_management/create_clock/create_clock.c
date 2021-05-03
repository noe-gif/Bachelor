/*
** EPITECH PROJECT, 2020
** menu_sprite
** File description:
** defender
*/

#include "prototypes.h"
#include "defender.h"
#include "my.h"
#include <stdlib.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include <unistd.h>
#include <SFML/Graphics.h>
#include <time.h>
#include <stdio.h>

void create_clock(window_t *global)
{
    global->clock_management = malloc(sizeof(clock_management_t));
    global->clock_management->seconds = 0;
    global->clock_management->clock = sfClock_create();
}

void start_clock(window_t *global)
{
    static int time = 0;

    global->clock_management->time =
    sfClock_getElapsedTime(global->clock_management->clock);
    global->clock_management->seconds =
    global->clock_management->time.microseconds / 1000000.0;
    if (global->clock_management->seconds >= time) {
        global->game_management->money += 1;
        time += 1;
        global->game_management->isnt_enough = 0;
    }
    if (global->clock_management->seconds >= 60.0) {
        sfClock_restart(global->clock_management->clock);
        global->clock_management->minutes += 1;
    }
    if (global->clock_management->seconds >= 1.0)
        global->game_management->countdown -= 1;
}
