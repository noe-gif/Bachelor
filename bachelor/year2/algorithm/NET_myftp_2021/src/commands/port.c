/*
** EPITECH PROJECT, 2021
** ftp
** File description:
** bootstrap
*/

#include "server.h"

void port(char *arg, int socket_client, server_t *ptr)
{
    char str[SIZE];

    ptr->in_use = 1;
    ptr->mode = strdup("actv");
    ptr->socket_data = create_data_actv(atoi(arg), 10, ptr);
    sprintf(str, "Command okay.\n");
    write(socket_client, str, strlen(str));
    while (handle_pasv(socket_client, ptr) != -1);
    ptr->mode = strdup("");
    return;
}