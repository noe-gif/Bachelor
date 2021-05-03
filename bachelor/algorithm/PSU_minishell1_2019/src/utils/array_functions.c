/*
** EPITECH PROJECT, 2020
** utils_2.c
** File description:
** utils
*/

#include "../../include/shell.h"
#include "../../include/my.h"

int custom_for_strcmp(char *string1, char *string2)
{
    int i = 0;

    while (string1[i] == string2[i]) {
        if (string1[i] != string2[i])
            return (2);
        if (i == 4)
            return (1);
        i++;
    }
    return (0);
}

void path_to_array(char **env, global_t *global)
{
    int line = 0;
    char path[] = "PATH=";
    char *path_str;

    while (env[line] != NULL) {
        if (custom_for_strcmp(path, env[line]) == 1) {
            path_str = malloc(sizeof(char) * (my_strlen(env[line])));
            path_str = my_strcpy(path_str, env[line]);
        }
        line++;
    }
    global->path = my_custom_str_to_word_array(path_str, ':');
    global->path[0] = &global->path[0][5];
}
