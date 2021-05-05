/*
** EPITECH PROJECT, 2021
** ftp
** File description:
** bootstrap
*/

#include "server.h"

int get_stor(char *arg, int fd, int socket_client)
{
    int file = open(arg, O_CREAT | O_WRONLY | O_TRUNC, 0666);
    char str[BUFF];
    int my_read = 0;

    if (file == -1) {
        return (1);
    }
    for (;true;) {
        my_read = read(fd, str, BUFF - 1);
        if (my_read <= 0) {
            break;
        }
        str[my_read] = '\0';
        dprintf(file, "%s", str);
    }
    dprintf(socket_client, "226 Closing data connection.\n");
    close(file);
    return (0);
}

void stor(char *str, int socket_client, server_t *ptr)
{
    ptr->in_use = 1;

    if (strcmp(ptr->mode, "pasv") != 0
    && strcmp(ptr->mode, "actv") != 0) {
        dprintf(socket_client, "xxx Error (RFC compliant)\n");
    }
    else {
        dprintf(socket_client, "150 File status okay; about to open \
        data connection.\n");
        if (get_stor(str, ptr->socket_data, socket_client) == 1) {
            dprintf(socket_client, "xxx Error (RFC compliant)\n");
        }
    }
    close(ptr->socket_data);
    return;
}