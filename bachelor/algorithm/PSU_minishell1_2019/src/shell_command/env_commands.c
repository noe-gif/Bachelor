/*
** EPITECH PROJECT, 2020
** env_commands
** File description:
** shell
*/

#include "../../include/my.h"
#include "../../include/shell.h"
#include <stdlib.h>

void set_env(global_t *global, char *var, int value)
{
    int line = 0;
    char *val = my_itoa(value);
    char *valsign = my_strcat("=", val);
    char *valvar =  my_strcat(var, valsign);

    while (global->env_tab[line] != NULL)
        line++;
    global->env_tab[line] = valvar;
    my_show_word_array(global->env_tab);
}

void set_novalue_env(global_t *global, char *var)
{
    int line = 0;
    char *valvar =  my_strcat(var, "=");

    while (global->env_tab[line] != NULL)
        line++;
    global->env_tab[line] = valvar;
    my_show_word_array(global->env_tab);
}

void unset_env(global_t *global, char *var)
{
    int line = 0;

    while (global->env_tab[line] != NULL) {
        if (custom_strcmp(global->env_tab[line], var) == 1) {
            global->env_tab[line] = "";
            if (my_strcmp(global->env_tab[line], "") == 0)
                line++;
        }
        line++;
    }
    my_show_word_array(global->env_tab);
}

int is_lastset_here(global_t *global, char **tab)
{
    int line = 0;
    char *new_str = malloc(sizeof(char) * (my_strlen(tab[1]) + 1));

    new_str = my_strcpy(new_str, tab[1]);
    new_str = my_strcat(new_str, "=");
    while (global->env_tab[line] != NULL) {
        if (my_strcmp(global->env_tab[line], new_str) == 0) {
            return (1);
        }
        line++;
    }
    return (0);
}
