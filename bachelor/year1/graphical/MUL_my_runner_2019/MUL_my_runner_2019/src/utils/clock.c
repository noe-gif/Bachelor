/*
** EPITECH PROJECT, 2020
** clock
** File description:
** runner
*/

#include "../../include/runner.h"
#include "../../include/my.h"
#include <stdlib.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include <unistd.h>
#include <SFML/Graphics.h>
#include <time.h>
#include <stdio.h>

void create_clock(select_player_t *select)
{
    select->seconds = 0;
    select->clock = sfClock_create();
}

void use_clock(select_player_t *select)
{
    select->time = sfClock_getElapsedTime(select->clock);
    select->seconds = select->time.microseconds / 1000000.0;
}
