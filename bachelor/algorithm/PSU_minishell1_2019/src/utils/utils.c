/*
** EPITECH PROJECT, 2020
** utils
** File description:
** shell
*/

#include "../../include/my.h"
#include "../../include/shell.h"

void malloc_env(global_t *global, char **env)
{
    int lines = 0;

    global->env_tab = malloc(sizeof(char *) * (2000 + 1));
    while (env[lines] != NULL) {
        global->env_tab[lines] = malloc(sizeof(char) * (2000 + 1));
        lines++;
    }
    lines = 0;
    while (env[lines] != NULL) {
        global->env_tab[lines] = env[lines];
        lines++;
    }
}

int has_prefix(char const *str1, char const *str2)
{
    int i = 0;

    while (str2[i]) {
        if (str1[i] != str2[i])
            return -1;
        i++;
    }
    return (0);
}

void current_right_directory(global_t *global)
{
    print_prompt(".");
    if (global->prompt_value == 2) {
        my_printf(" [");
        my_printf("-");
        my_printf("] ");
    }
    if (global->prompt_value == 0) {
        my_printf(" [");
        my_printf("\033[1;%dm", GREEN);
        my_printf("✔");
        my_printf("\033[0m");
        my_printf("] ");
    }
    if (global->prompt_value == 1) {
        my_printf(" [");
        my_printf("\033[1;%dm", RED);
        my_printf("✗");
        my_printf("\033[0m");
        my_printf("] ");
    }
}

int loop_statement(char *path, char **env, global_t *global, char **tab)
{
    int state = 0;

    tab = my_str_to_word_array(path);
    state = first_parsing(path, global, tab, env);
    if (state == 1)
        return (1);
    else if (state == 0)
        forked_commands(global, path, env, tab);
    return (0);
}
