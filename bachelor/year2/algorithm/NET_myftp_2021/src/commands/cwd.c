/*
** EPITECH PROJECT, 2021
** ftp
** File description:
** bootstrap
*/

#include "server.h"

void cwd(char *str, int socket_client, server_t *ptr)
{
    char msg[SIZE] = "Requested file action okay, completed.\n";
    char error[SIZE] = "xxx Error (RFC compliant)\n";

    ptr->in_use = 1;
    chomp(str);
    if (chdir(str) == -1) {
        write(socket_client, error, strlen(error));
        return;
    } else {
        write(socket_client, msg, strlen(msg));
    }
    return;
}