/*
** EPITECH PROJECT, 2021
** ftp
** File description:
** bootstrap
*/

#include "server.h"

void quit(int socket_client, server_t *ptr)
{
    ptr->in_use = 1;
    close(socket_client);
    return;
}