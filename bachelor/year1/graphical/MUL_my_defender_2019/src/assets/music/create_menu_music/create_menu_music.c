/*
** EPITECH PROJECT, 2020
** menu_music
** File description:
** defender
*/

#include "prototypes.h"
#include "defender.h"
#include "my.h"
#include <SFML/Audio/Export.h>
#include <SFML/Audio/SoundStatus.h>
#include <SFML/Audio/Types.h>
#include <SFML/System/InputStream.h>
#include <SFML/System/Time.h>
#include <SFML/System/Vector3.h>
#include <stddef.h>
#include <stdlib.h>
#include <SFML/Audio.h>

void create_menu_music(window_t *global)
{
    global->sound_management = malloc(sizeof(sound_t));
    global->sound_management->menu_music =
    sfMusic_createFromFile("resources/sounds/music/menu_music.ogg");
    sfMusic_setLoop(global->sound_management->menu_music,
    global->sound_management->menu_music_loop);
    sfMusic_play(global->sound_management->menu_music);
}
