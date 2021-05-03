/*
** EPITECH PROJECT, 2020
** main
** File description:
** minishell
*/

#include "my.h"
#include "shell.h"

int main(int ac, __attribute__((unused))char **av, char **env)
{
    size_t size = 32;
    char *path = malloc(sizeof(char) * size + 1);
    char **tab = 0;
    global_t *global = malloc(sizeof(global_t));

    global->prompt_value = 2;
    if (ac != 1)
        return (84);
    global->pid = 0;
    global->status = 0;
    current_right_directory(global);
    shell_loop(path, env, global, tab);
    return (0);
}
