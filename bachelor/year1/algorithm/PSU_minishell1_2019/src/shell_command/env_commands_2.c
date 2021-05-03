/*
** EPITECH PROJECT, 2020
** env_commands_2
** File description:
** minishell
*/

#include "../../include/shell.h"
#include "../../include/my.h"

int is_lastset_here_value(global_t *global, char **tab, int value)
{
    int line = 0;
    char *new_str = malloc(sizeof(char) * (my_strlen(tab[1]) + 1));
    char *val = my_itoa(value);

    new_str = my_strcpy(new_str, tab[1]);
    new_str = my_strcat(new_str, "=");
    new_str = my_strcat(new_str, val);
    while (global->env_tab[line] != NULL) {
        if (my_strcmp(global->env_tab[line], new_str) == 0) {
            return (1);
        }
        line++;
    }
    return (0);
}
