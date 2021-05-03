/*
** EPITECH PROJECT, 2020
** music
** File description:
** runner
*/

#include <SFML/Audio/Export.h>
#include <SFML/Audio/SoundStatus.h>
#include <SFML/Audio/Types.h>
#include <SFML/System/InputStream.h>
#include <SFML/System/Time.h>
#include <SFML/System/Vector3.h>
#include <stddef.h>

void create_music(select_player_t *select)
{
    sfBool loop;
    char music[] = "";

    sfMusic_createFromFile(music);
    sfMusic_setLoop(select->music, loop);
}
