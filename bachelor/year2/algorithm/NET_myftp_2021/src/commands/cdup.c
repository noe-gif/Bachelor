/*
** EPITECH PROJECT, 2021
** ftp
** File description:
** bootstrap
*/

#include "server.h"

void cdup(int socket_client, server_t *ptr)
{
    char msg[SIZE] = "Command okay.\n";
    char error[SIZE] = "xxx Error (RFC compliant)\n";

    ptr->in_use = 1;
    if (chdir("..") == -1) {
        write(socket_client, error, strlen(error));
        return;
    } else {
        write(socket_client, msg, strlen(msg));
    }
    return;
}