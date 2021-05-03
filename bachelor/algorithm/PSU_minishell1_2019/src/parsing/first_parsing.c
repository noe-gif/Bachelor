/*
** EPITECH PROJECT, 2020
** parsing
** File description:
** shell
*/

#include "../../include/my.h"
#include "../../include/shell.h"
#include <stdio.h>
#include <signal.h>

int exit_parsing(char *path, global_t *global, char **tab, char **env)
{
    if (my_strcmp(tab[0], "exit") == 0) {
        global->prompt_value = 0;
        return (1);
    }
    return (0);
}

int third_parsing(char *path, global_t *global, char **tab, char **env)
{
    if (global->status == 0)
        malloc_env(global, env);
    if ((my_strcmp(tab[0], "setenv") == 0) && tab[2] == NULL) {
        if (is_lastset_here(global, tab) == 1)
            return (2);
        set_novalue_env(global, tab[1]);
    }
    if ((my_strcmp(tab[0], "unsetenv") == 0))
        unset_env(global, tab[1]);
    if ((my_strcmp(tab[0], "setenv") == 0) && tab[2] != NULL) {
        if (is_lastset_here_value(global, tab, my_getnbr(tab[2])) == 1)
            return (2);
        set_env(global, tab[1], my_getnbr(tab[2]));
    }
    return (0);
}

int second_parsing(char *path, global_t *global, char **tab, char **env)
{
    if (my_strcmp(tab[0], "env") == 0) {
        my_show_word_array(global->env_tab);
        return (2);
    }
    if ((my_strcmp(tab[0], "cd") == 0) && (tab[1] != NULL)) {
        cd(global, env, tab);
        return (2);
    }
    if ((my_strcmp(tab[0], "cd") == 0) && (tab[1] == NULL)) {
        cd_home(global, env, tab);
        return (2);
    }
    return (0);
}

int first_parsing(char *path, global_t *global, char **tab, char **env)
{
    path_to_array(env, global);
    if (third_parsing(path, global, tab, env) == 2)
        return (2);
    if (second_parsing(path, global, tab, env) == 2)
        return (2);
    else if ((exit_parsing(path, global, tab, env) == 1))
        return (1);
    return (0);
}

void shell_loop(char *path, char **env, global_t *global, char **tab)
{
    size_t size = 32;

    while (1) {
        signal(SIGINT, signal_handler);
        if (getline(&path, &size, stdin) == -1) {
            my_printf("exit\n");
            return;
        }
        path = remove_backslash_n(path);
        if (((my_strlen(path) == 2) && (path[0] == ' ')) ||  path[1] == '\0')
            current_right_directory(global);
        else {
            if (loop_statement(path, env, global, tab) == 1)
                return;
            current_right_directory(global);
            global->status++;
        }
    }
}
