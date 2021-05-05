/*
** EPITECH PROJECT, 2021
** ftp
** File description:
** bootstrap
*/

#include "server.h"

int new_connection(int socket_serv, server_t *server)
{
    int addr_size = sizeof(SA_IN);
    int socket_client;
    SA_IN client_addr;
    char _credits[INET_ADDRSTRLEN];

    check(socket_client = accept(socket_serv, (SA*)&client_addr,
    (socklen_t*)&addr_size), "accept failed");
    if (inet_ntop(AF_INET, &client_addr.sin_addr.s_addr, _credits,
    sizeof(client_addr)) != NULL)
        server->credits = strdup(_credits);
    write(socket_client, "220\n", 4);
    return (socket_client);
}

int is_login(int socket_client, server_t *server)
{
    if ((strcmp(server->user_name, "") == 0)
    && (strcmp(server->user_password, "") == 0)) {
        write(socket_client, "530 Please login with USER and PASS.\n", 37);
        return (-1);
    }
    return (0);
}

int parse_empty_commands(char *command, server_t *server, int socket_client)
{
    char *new_array[] = {"cdup", "quit", "pwd", "pasv", "noop", "help", NULL};

    chomp(command);
    if (is_login(socket_client, server) == -1)
        return (-2);
    if (strcmp("list", strlowcase(command)) == 0) {
        list_empty(socket_client, server);
        return (0);
    }
    for (int x = 0, y = 0; new_array[y] != NULL; y++) {
        for (x = 0; new_array[y][x] != '\0'; x++) {
            if (strcmp(new_array[y], strlowcase(command)) == 0) {
                (*server->empty_functions[y]) (socket_client, server);
                return (0);
            }
        }
    }
    return (-1);
}

int parse_pasv_commands(char *command, char *param, server_t *server,
int socket_client)
{
    if (strcmp(command, "list") == 0) {
        list(param, socket_client, server);
        return (0);
    }
    else if (strcmp(command, "RETR") == 0) {
        retr(param, socket_client, server);
        return (0);
    } else if (strcmp(command, "STOR") == 0) {
        stor(param, socket_client, server);
        return (0);
    }
    return (-1);
}

int parse_arg_commands(char *command, char *param, server_t *server,
int socket_client)
{
    char *new_array[] = {
        "user", "pass", "cwd", "dele", "port", "retr", "stor", "list", NULL};
    int x = 0;
    int y = 0;

    chomp(command);
    if ((strcmp(command, "user") != 0) && (strcmp(command, "pass") != 0)) {
        if (is_login(socket_client, server) == -1)
            return (-2);
    }
    for (; new_array[y] != NULL; y++) {
        x = 0;
        for (; new_array[y][x] != '\0'; x++) {
            if (strcmp(new_array[y], strlowcase(command)) == 0) {
                (*server->param_functions[y]) (param, socket_client, server);
                return (0);
            }
        }
    }
    return (-1);
}