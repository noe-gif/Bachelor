/*
** EPITECH PROJECT, 2021
** ftp
** File description:
** bootstrap
*/

#include "server.h"

int aff_retr(char *arg, int fd_new, int socket_client)
{
    FILE *file = fopen(arg, "r+");
    char str[LEN];

    if (file == NULL) {
        close(fd_new);
        fclose(file);
        return (1);
    } else {
        while (fgets(str, LEN, file)) {
            dprintf(fd_new, "%s", str);
        }
        fclose(file);
        dprintf(socket_client, "226 Closing data connection.\n");
        close(fd_new);
        return (0);
    }
    return (0);
}

void retr(char *str, int socket_client, server_t *ptr)
{
    ptr->in_use = 1;

    if (strcmp(ptr->mode, "pasv") != 0
    && strcmp(ptr->mode, "actv") != 0)
        dprintf(socket_client, "xxx Error (RFC compliant)\n");
    else {
        dprintf(socket_client, "150 File status okay; about to open data \
        connection.\n");
        if (aff_retr(str, ptr->socket_data, socket_client) == 1)
            dprintf(socket_client, "xxx Error (RFC compliant)\n");
    }
    close(ptr->socket_data);
    return;
}