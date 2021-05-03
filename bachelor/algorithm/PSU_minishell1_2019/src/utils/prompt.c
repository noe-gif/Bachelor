/*
** EPITECH PROJECT, 2020
** prompt
** File description:
** minishell
*/

#include "../../include/my.h"
#include "../../include/shell.h"
#include <sys/types.h>
#include <grp.h>
#include <fcntl.h>
#include <string.h>
#include <getopt.h>
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>
#include <pwd.h>

char *file_to_inspect(char *ls, char *file)
{
    char *str = my_strdup(ls);

    if (my_strcmp(str, ".") == 0) {
        str = my_strcat(str, "/");
        str = my_strcat(str, file);
        return (str);
    }
    str = my_strcat(str, "/");
    str = my_strcat(str, file);
    return (str);
}

void print_yellow_prompt(struct passwd *pwd, char **CWD, int line)
{
    my_printf("\033[1;%dm", YELLOW);
    my_printf("[%s@localhost %s]", pwd->pw_name, CWD[line - 1]);
    my_printf("\033[0m");
}

void prompt_info(struct dirent *current_directory, struct stat my_stat,
    char *dirname)
{
    char *str;
    struct passwd *pwd;
    char cwd[200];
    char **CWD;
    int line = 0;

    getcwd(cwd, sizeof(cwd));
    str = file_to_inspect(dirname, current_directory->d_name);
    stat(str, &my_stat);
    pwd = getpwuid(my_stat.st_uid);
    CWD = my_custom_str_to_word_array(cwd, '/');
    for (; CWD[line] != NULL; line++);
    if ((cwd[0] == '/') && (my_strlen(cwd) == 1)) {
        my_printf("\033[1;%dm", YELLOW);
        my_printf("[%s@localhost /]", pwd->pw_name);
        my_printf("\033[0m");
    }
    else
        print_yellow_prompt(pwd, CWD, line);
}

int print_prompt(char *dirname)
{
    struct dirent *current_directory;
    struct stat my_stat;
    DIR *directory = opendir(dirname);
    int i = 0;

    while ((current_directory = readdir(directory)) != 0) {
        if (i == 1)
            return (0);
        prompt_info(current_directory, my_stat, dirname);
        i++;
    }
    if (ENOENT == errno) {
        return (84);
    }
    closedir(directory);
    return (0);
}

void current_directory(void)
{
    print_prompt(".");
    my_printf(" [");
    my_printf("-");
    my_printf("] ");
}
