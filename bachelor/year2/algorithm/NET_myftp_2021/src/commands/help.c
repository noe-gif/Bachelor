/*
** EPITECH PROJECT, 2021
** ftp
** File description:
** bootstrap
*/

#include "server.h"

void help(int socket_client, server_t *ptr)
{
    ptr->in_use = 1;
    
    dprintf(socket_client, "214 Help message.\n");
    dprintf(socket_client, "The following commands are recognize" \
    "d.\n CDUP CWD DELE HELP LIST \n NOOP PASS PASV PORT PWD QUIT" \
    "RETR STOR USER\n");
    return;
}