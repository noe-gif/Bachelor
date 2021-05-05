/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** ftp
*/

#ifndef SERVER_H
#define SERVER_H

#include <arpa/inet.h>
#include <errno.h>
#include <netinet/in.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdbool.h>
#include <ctype.h>
#include <dirent.h>
#include <netdb.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

#define MAXLINE 1024
#define SIZE 1024
#define LEN 4096
#define BUFF 2048
#define SOCKETERROR (-1)

typedef struct sockaddr_in SA_IN;

typedef struct sockaddr SA;

typedef struct fd_s {
    int number;
    int fd;
    struct fd_s *next;
}fd_t;

typedef struct server_s {
    void (*empty_functions[6]) (int socket_client, struct server_s *ptr);
    void (*param_functions[8]) (char *string, int socket_client,
    struct server_s *ptr);
    int data_port;
    int socket_data;
    char *credits;
    int server_port;
    char *path;
    char *user_name;
    char *user_password;
    char *mode;
    int in_use;
    int fd_mod;
    int socket_server;
} server_t;

int parse_pasv_commands(char *command, char *param, server_t *server,
int socket_client);
int check(int exp, const char *msg);
void init_pointers(server_t *server);
void parse_commands(char *command, char *param, server_t *server, int flag);
int create_data_pasv(int backlog, server_t *server);
int my_show_word_array(char **tab);
char *strlowcase(char *str);
char *get_arg(char *input);
char *get_command(char *input);
void send_file(FILE *fp, int sockfd);
void init_pointers(server_t *server);
int find_max_fd(fd_t *fds);
fd_t *ctor(int socket_client);
fd_t *add_node(fd_t *node, int socket_client);
int check(int exp, const char *msg);
int create_data(int backlog, server_t *server);
int setup_server(short port, int backlog);
int new_connection(int socket_serv, server_t *server);
int parse_empty_commands(char *command, server_t *server, int socket_client);
int parse_arg_commands(char *command, char *param, server_t *server,
int socket_client);
int handle_client(int socket_client, server_t *server, fd_t *fds);
int start_server(int socket_server, server_t *server, fd_t *fds);
void chomp(char *string);
void reverse(char *s, int l);
int ltoa_simple(char *s, long num);
char *str_replace(char *str, char sep, char rep);
int create_data_actv(short port, int backlog, server_t *server);
int pasv_mod(server_t *server, struct protoent *pr_e);
int handle_pasv(int socket_client, server_t *server);

// commands
void cdup(int socket_client, server_t *ptr);
void cwd(char *str, int socket_client, server_t *ptr);
void dele(char *str, int socket_client, server_t *ptr);
void help(int socket_client, server_t *ptr);
void list(char *str, int socket_client, server_t *ptr);
void noop(int socket_client, server_t *ptr);
void pass(char *str, int socket_client, server_t *ptr);
void pasv(int socket_client, server_t *ptr);
void port(char *str, int socket_client, server_t *ptr);
void pwd(int socket_client, server_t *ptr);
void quit(int socket_client, server_t *ptr);
void retr(char *str, int socket_client, server_t *ptr);
void stor(char *str, int socket_client, server_t *ptr);
void user(char *str, int socket_client, server_t *ptr);
void list_empty(int socket_client, server_t *ptr);

#endif /* !SERVER_H */