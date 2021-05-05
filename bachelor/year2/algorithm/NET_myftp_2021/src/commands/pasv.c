/*
** EPITECH PROJECT, 2021
** ftp
** File description:
** bootstrap
*/

#include "server.h"

char *str_replace(char *str, char sep, char rep)
{
    char *new = malloc(sizeof(char) * (strlen(str) + 1));

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == sep) {
            str[i] = rep;
        }
        new[i] = str[i];
    }
    return (new);
}

void pasv(int socket_client, server_t *ptr)
{
    char str[SIZE];

    ptr->in_use = 1;
    ptr->mode = strdup("pasv");
    ptr->socket_data = create_data_pasv(10, ptr);
    sprintf(str, "227 Entering Passive Mode (%s,%d,%d).\n",
    str_replace(ptr->credits, '.', ','), ptr->data_port/256,
    ptr->data_port % 256);
    write(socket_client, str, strlen(str));
    while (handle_pasv(socket_client, ptr) != -1);
    ptr->mode = strdup("");
    return;
}