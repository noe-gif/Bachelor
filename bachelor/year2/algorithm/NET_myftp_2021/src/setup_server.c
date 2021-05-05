/*
** EPITECH PROJECT, 2021
** ftp
** File description:
** bootstrap
*/

#include "server.h"

int check(int error, const char *message)
{
    if (error == -1) {
        perror(message);
        exit(1);
    }
    return (error);
}

int create_data_actv(short port, int backlog, server_t *server)
{
    int data_socket;
    SA_IN data_adrr;

    check((data_socket = socket(AF_INET, SOCK_STREAM, 0)),
    "Failed to create (DATA) socket :/");
    data_adrr.sin_family = AF_INET;
    data_adrr.sin_addr.s_addr = INADDR_ANY;
    data_adrr.sin_port = htons(port);
    server->data_port = port;

    bind(data_socket, (SA*)&data_adrr, sizeof(data_adrr));
    listen(data_socket, backlog);
    printf("[SERVER] (DATA) setup\n");
    return (data_socket);
}

int create_data_pasv(int backlog, server_t *server)
{
    int data_socket;
    SA_IN data_adrr;
    int port;

    check((data_socket = socket(AF_INET, SOCK_STREAM, 0)),
    "Failed to create (DATA) socket :/");
    data_adrr.sin_family = AF_INET;
    data_adrr.sin_addr.s_addr = INADDR_ANY;
    port = rand() % (65635 - 1024) + 1024;
    server->data_port = port;
    data_adrr.sin_port = htons(port);

    bind(data_socket, (SA*)&data_adrr, sizeof(data_adrr));
    listen(data_socket, backlog);
    printf("[SERVER] (DATA) setup\n");
    return (data_socket);
}

int setup_server(short port, int backlog)
{
    int server_socket;
    SA_IN server_addr;

    check((server_socket = socket(AF_INET, SOCK_STREAM, 0)),
    "Failed to create (CONTROL) socket :/");
    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = INADDR_ANY;
    server_addr.sin_port = htons(port);

    bind(server_socket, (SA*)&server_addr, sizeof(server_addr));
    listen(server_socket, backlog);
    printf("[SERVER] (CONTROL) setup\n");
    return (server_socket);
}