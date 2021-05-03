/*
** EPITECH PROJECT, 2020
** browse
** File description:
** shell
*/

#include "../../include/shell.h"
#include "../../include/my.h"
#include <dirent.h>
#include <string.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>
#include <pwd.h>

void forked_commands(global_t *global, char *input, char **env, char **line)
{
    browse_directory(global, input, line);
    if (global->value == 0) {
        my_printf("%s: Command not found.\n", input);
        global->prompt_value = 1;
        return;
    }
    global->prompt_value = 0;
    global->pid = fork();
    if (global->pid == 0) {
        while (1) {
            execve(global->command, line, global->env_tab);
            if (execve(global->command, line, global->env_tab) == -1) {
                kill(getpid(), SIGKILL);
                return;
            }
        }
    }
    else
        wait(NULL);
}

char *remove_backslash_n(char *input)
{
    int j = 0;

    while (input[j] != '\0') {
        if (input[j] == '\n')
            input[j] = '\0';
        j++;
    }
    return (input);
}

void dup_command(struct dirent *current_directory, global_t *global, int i)
{
    global->command = malloc(sizeof(char) * (
    my_strlen(current_directory->d_name + 1)));
    global->command = my_strcpy(global->command, current_directory->d_name);
    global->command = my_strcat("/", global->command);
    global->command = my_strcat(global->path[i], global->command);
    return;
}

int loop_on_files(global_t *global, char **line, int i)
{
    struct dirent *current_directory;
    DIR* directory;

    directory = opendir(global->path[i]);
    while ((current_directory = readdir(directory)) != NULL) {
        if (current_directory->d_name[0] != '.') {
            if (my_strcmp(current_directory->d_name, line[0]) == 0) {
                dup_command(current_directory, global, i);
                return (1);
            }
        }
    }
    return (0);
}

void browse_directory(global_t *global, char *input, char **line)
{
    int i = 2;

    global->value = 0;
    input = remove_backslash_n(input);
    while (global->path[i] != NULL) {
        global->value = loop_on_files(global, line, i);
        if (global->value == 1)
            return;
        i++;
    }
}
