/*
** EPITECH PROJECT, 2021
** ftp
** File description:
** bootstrap
*/

#include "server.h"

void my_ls_arg(server_t *ptr, int socket_client, char *arg)
{
    FILE *file;
    char str[4096];
    SA_IN client_addr;
    int addr_size = sizeof(SA_IN);
    int fd_new = accept(ptr->socket_data, (SA*)&client_addr, 
    (socklen_t*)&addr_size);
    char *command = strdup("ls -l ");
    strcat(command, arg);

    if (fd_new == -1)
        dprintf(socket_client, "xxx Error (RFC compliant)\n");
    else {
        file = popen(command, "r");
        while (fgets(str, 4096, file)) {
            write(fd_new, str, strlen(str));
        }
        fclose(file);
        close(fd_new);
        dprintf(socket_client, "226 Closing data connection.\n");
    }
}

void my_ls(server_t *ptr, int socket_client)
{
    FILE *file;
    char str[4096];
    SA_IN client_addr;
    int addr_size = sizeof(SA_IN);
    int fd_new = accept(ptr->socket_data,(SA*)&client_addr,
    (socklen_t*)&addr_size);

    if (fd_new == -1) {
        dprintf(socket_client, "xxx Error (RFC compliant)\n");
    }
    else {
        file = popen("ls -l", "r");
        while (fgets(str, 4096, file)) {
            dprintf(fd_new, "%s", str);
        }
        fclose(file);
        close(fd_new);
        dprintf(socket_client, "226 Closing data connection.\n");
    }
}

void list_empty(int socket_client, server_t *ptr)
{
    ptr->in_use = 1;

    if (strcmp(ptr->mode, "pasv") != 0
    && strcmp(ptr->mode, "actv") != 0) {
        dprintf(socket_client, "xxx Error (RFC compliant)\n");
    } 
    else {
        dprintf(socket_client, "150 File status okay; about to open \
        data connection.\n");
        my_ls(ptr, socket_client);
    }
    close(ptr->socket_data);
    return;
}

void list(char *str, int socket_client, server_t *ptr)
{
    ptr->in_use = 1;

    if (strcmp(ptr->mode, "pasv") != 0
    && strcmp(ptr->mode, "actv") != 0)
        dprintf(socket_client, "xxx Error (RFC compliant)\n");
    else {
        dprintf(socket_client, "150 File status okay; about to opendata \
        connection.\n");
        my_ls_arg(ptr, socket_client, str);
    }
    close(ptr->socket_data);
    return;
}