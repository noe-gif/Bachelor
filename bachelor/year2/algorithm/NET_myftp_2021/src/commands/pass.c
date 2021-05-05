/*
** EPITECH PROJECT, 2021
** ftp
** File description:
** bootstrap
*/

#include "server.h"

void pass(char *str, int socket_client, server_t *ptr)
{
    char msg[SIZE] = "230 User logged in, proceed.\n";
    char error[SIZE] = "332 Need account for login.\n";

    ptr->in_use = 1;
    if (strcmp(ptr->user_name, "Anonymous") != 0) {
        write(socket_client, error, strlen(error));
        return;
    }
    ptr->user_password = strdup(str);
    write(socket_client, msg, strlen(msg));
    return;
}