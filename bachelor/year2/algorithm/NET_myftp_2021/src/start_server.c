/*
** EPITECH PROJECT, 2021
** ftp
** File description:
** bootstrap
*/

#include "server.h"

int does_it_exist(char *command)
{
    char *new_array[] = {
        "cdup", "quit", "pwd", "pasv", "noop", "help",
        "user", "pass", "cwd", "dele", "port", "retr", "stor", "list", NULL};
    int x = 0;
    int y = 0;

    for (; new_array[y] != NULL; y++) {
        x = 0;
        for (; new_array[y][x] != '\0'; x++) {
            if (strcmp(new_array[y], strlowcase(command)) == 0)
                return (0);
        }
    }
    return (-1);
}

int handle_pasv(int socket_client, server_t *server)
{
    char *input = malloc(sizeof(char) * (1024));
    int error = 0;

    read(socket_client, input, 1024);
    chomp(input);
    char *arg = get_arg(input);
    char *command = get_command(input);
    if (arg == NULL || strlen(command) == 0 || does_it_exist(command) == -1)
        error = -1;
    if (error == 0) {
        if (strcmp(arg, "") == 0)
            error = parse_empty_commands(command, server, socket_client);
        else
            error = parse_pasv_commands(command, arg, server, socket_client);
    }
    if (error == -1)
        write(socket_client, "xxx Error (RFC compliant)\n", 26);
    else {
        write(socket_client, "", 1);
        return (-1);
    }
    return (0);
}

int handle_client(int socket_client, server_t *server, fd_t *fds)
{
    char *input = malloc(sizeof(char) * (1024));
    int error = 0;

    read(socket_client, input, 1024);
    chomp(input);
    printf("[CLIENT N°%d] asked: |%s|\n", fds->number, input);
    char *arg = get_arg(input);
    char *command = get_command(input);
    if (arg == NULL || strlen(command) == 0 || does_it_exist(command) == -1)
        error = -1;
    if (error == 0) {
        if (strcmp(arg, "") == 0)
            error = parse_empty_commands(command, server, socket_client);
        else
            error = parse_arg_commands(command, arg, server, socket_client);
    }
    if (error == -1)
        write(socket_client, "xxx Error (RFC compliant)\n", 26);
    else
        write(socket_client, "", 1);
    return (0);
}

int start_server(int socket_server, server_t *server, fd_t *fds)
{
    fd_set socket_cur;
    fd_set socket_rdy;
    int socket_client;
    int max = 0;
    FD_ZERO(&socket_cur);
    FD_SET(socket_server, &socket_cur);

    server->socket_server = socket_server;
    for (;true;) {
        socket_rdy = socket_cur;
        max = find_max_fd(fds);
        max = ((max - 1 < socket_server) ? socket_server + 1 : max);
        int size = select(max, &socket_rdy, NULL, NULL, NULL);
        for (int count = 0; size > 0; count++) {
            if (FD_ISSET(count, &socket_rdy)) {
                if (count == socket_server) {
                    printf("[SERVER] new connection detected\n");
                    socket_client = new_connection(socket_server, server);
                    add_node(fds, socket_client);
                    FD_SET(socket_client, &socket_cur);
                }
                else {
                    if (handle_client(socket_client, server, fds) == -1) {
                        close(socket_server);
                        return -1;
                    }
                }
                size--;
            }
        }
    }
    return (0);
}