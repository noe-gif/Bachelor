/*
** EPITECH PROJECT, 2019
** struct
** File description:
** struct
*/

#ifndef STRUCT
#define STRUCT

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <pwd.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>
#include <grp.h>
#include <string.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/wait.h>

#define YELLOW 33
#define GREEN 32
#define RED 31

typedef struct global_s
{
    char **env_tab;
    char **path;
    char **pwd;
    char **CWD;
    char **OLD_CWD;
    int status;
    pid_t pid;
    char *command;
    int value;
    int prompt_value;
}global_t;

/*
**shell_functions
*/

void set_env(global_t *global, char *var, int value);
void unset_env(global_t *global, char *var);
void set_novalue_env(global_t *global, char *var);
void cd(global_t *global, char **env, char **tab);
void cd_home(global_t *global, char **env, char **tab);

/*
**utils_functions
*/

void malloc_env(global_t *global, char **env);
void current_directory(void);
int has_prefix(char const *str1, char const *str2);
int first_parsing(char *path, global_t *global, char **tab, char **env);
void forked_commands(global_t *global, char *input, char **env, char **line);
void shell_loop(char *path, char **env, global_t *global, char **tab);
int is_lastset_here(global_t *global, char **tab);
int is_lastset_here_value(global_t *global, char **tab, int value);
void path_to_array(char **env, global_t *global);
void browse_directory(global_t *global, char *input, char **line);
char *remove_backslash_n(char *input);
void current_right_directory(global_t *global);
int loop_statement(char *path, char **env, global_t *global, char **tab);
int print_prompt(char *dirname);

/*
**error_functions
*/

int verify_existing_command(char **input, global_t *global);

/*
**signal_functions
*/

void signal_handler(int sig);

#endif /* STRUCT  */
