/*
** EPITECH PROJECT, 2021
** ftp
** File description:
** bootstrap
*/

#include "server.h"

void dele(char *str, int socket_client, server_t *ptr)
{
    char msg[SIZE] = "Requested file action okay, completed.\n";
    char error[SIZE] = "xxx Error (RFC compliant)\n";

    ptr->in_use = 1;
    if (remove(str) == 0)
        write(socket_client, msg, strlen(msg));
    else
        write(socket_client, error, strlen(error));
    return;
}