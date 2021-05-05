/*
** EPITECH PROJECT, 2021
** ftp
** File description:
** bootstrap
*/

#include "server.h"

int set_path(server_t *server)
{
    char s[100];

    if (chdir(server->path) == -1) {
        printf("%s\n", getcwd(s, 100));
        return (-1);
    }
    printf("%s\n", getcwd(s, 100));
    return (0);
}

void init_pointers(server_t *server)
{
    server->empty_functions[0] = cdup;
    server->empty_functions[1] = quit;
    server->empty_functions[2] = pwd;
    server->empty_functions[3] = pasv;
    server->empty_functions[4] = noop;
    server->empty_functions[5] = help;
    server->empty_functions[6] = list_empty;
    server->param_functions[0] = user;
    server->param_functions[1] = pass;
    server->param_functions[2] = cwd;
    server->param_functions[3] = dele;
    server->param_functions[4] = port;
    server->param_functions[5] = retr;
    server->param_functions[6] = stor;
    server->param_functions[7] = list;
}

void helper()
{
    printf("USAGE: ./myftp port path\n\t");
    printf("port is the port number on which the server socket listens\n\t");
    printf("path is the path to the home directory for the Anonymous user");
}

int init_data(server_t *server, char **av)
{
    server->server_port = atoi(av[1]);
    if (server->server_port == 0)
        return (84);
    server->path = strdup(av[2]);
    server->user_name = strdup("");
    server->user_password = strdup("");
    server->mode = strdup("");
    server->fd_mod = -1;
    return (0);
}

int main(int ac, char **av)
{
    server_t *server = malloc(sizeof(server_t));
    fd_t *fds = malloc(sizeof(fd_t));

    fds->number = 0;
    if (ac != 3 || ((ac == 2) && (strcmp(av[1], "-help") == 0))) {
        helper();
        return (0);
    }
    if (init_data(server, av) == 84)
        return (84);
    init_pointers(server);
    if (set_path(server))
        return (84);
    start_server(setup_server(atoi(av[1]), 10), server, fds);
    return (0);
}