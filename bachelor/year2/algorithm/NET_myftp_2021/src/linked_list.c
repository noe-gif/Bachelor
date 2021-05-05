/*
** EPITECH PROJECT, 2021
** ftp
** File description:
** bootstrap
*/

#include "server.h"

int find_max_fd(fd_t *fds)
{
    int biggest_fd = 0;

    for (fd_t *tmp = fds;tmp;tmp = tmp->next) {
        if (tmp->fd > biggest_fd)
            biggest_fd = tmp->fd;
    }
    return (biggest_fd + 1);
}

fd_t *my_ctor(int socket_client)
{
    fd_t *new = malloc(sizeof(fd_t));
    new->fd = socket_client;
    return (new);
}

fd_t *add_node(fd_t *node, int socket_client)
{
    fd_t *tmp;

    if (node == NULL)
        return (my_ctor(socket_client));
    for (tmp = node; tmp->next != NULL;tmp = tmp->next);
    tmp->next = my_ctor(socket_client);
    node->number += 1;
    return (node);
}