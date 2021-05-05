/*
** EPITECH PROJECT, 2021
** ftp
** File description:
** bootstrap
*/

#include "server.h"

void noop(int socket_client, server_t *ptr)
{
    char msg[SIZE] = "200 Command okay.\n";

    ptr->in_use = 1;
    write(socket_client, msg, strlen(msg));
    return;
}