/*
** EPITECH PROJECT, 2020
** cd
** File description:
** minishell1
*/

#include "../../include/my.h"
#include "../../include/shell.h"

void cd_home(global_t *global, char **env, char **tab)
{
    char new_cwd[100];
    char old_cwd[100];

    global->prompt_value = 0;
    global->pwd = my_custom_str_to_word_array(global->env_tab[15], '/');
    getcwd(old_cwd, sizeof(old_cwd));
    chdir("/home/noe");
    getcwd(new_cwd, sizeof(new_cwd));
    global->env_tab[15] = my_strcpy(global->env_tab[15], new_cwd);
    global->env_tab[52] = my_strcpy(global->env_tab[52], old_cwd);

}

void cd_root(global_t *global, char **tab)
{
    if (my_strcmp(tab[1], "-") == 0) {
        global->prompt_value = 0;
        chdir(global->env_tab[52]);
        return;
    }
    if (my_strcmp(tab[1], "~") == 0) {
        global->prompt_value = 0;
        chdir("/home/noe");
        return;
    }
    if (chdir(tab[1]) == -1) {
        my_printf("%s: No such file or directory.\n", tab[1]);
        global->prompt_value = 1;
        return;
    }
    global->prompt_value = 0;
}

void change_directory(global_t *global, char **tab)
{
    char new_cwd[100];
    char old_cwd[100];

    getcwd(old_cwd, sizeof(old_cwd));
    cd_root(global, tab);
    getcwd(new_cwd, sizeof(new_cwd));
    global->env_tab[15] = my_strcpy(global->env_tab[15], new_cwd);
    global->env_tab[52] = my_strcpy(global->env_tab[52], old_cwd);
}

void cd(global_t *global, char **env, char **tab)
{
    global->pwd = my_custom_str_to_word_array(global->env_tab[15], '/');
    change_directory(global, tab);
    return;
}
