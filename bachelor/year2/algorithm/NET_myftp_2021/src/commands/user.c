/*
** EPITECH PROJECT, 2021
** ftp
** File description:
** bootstrap
*/

#include "server.h"

void user(char *str, int socket_client, server_t *ptr)
{
    char msg[SIZE] = "331 User name okay, need password.\n";

    chomp(str);
    ptr->in_use = 1;
    ptr->user_name = strdup(str);
    write(socket_client, msg, strlen(msg));
    return;
}