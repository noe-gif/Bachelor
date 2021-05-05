/*
** EPITECH PROJECT, 2021
** ftp
** File description:
** bootstrap
*/

#include "server.h"

void pwd(int socket_client, server_t *ptr)
{
    char *cur_path = malloc(sizeof(char) * (100));
    char str[SIZE];

    ptr->in_use = 1;
    sprintf(str, "257 %s created.\n", getcwd(cur_path, 100));
    write(socket_client, str, strlen(str));
    return;
}