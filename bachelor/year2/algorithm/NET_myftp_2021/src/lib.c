/*
** EPITECH PROJECT, 2021
** ftp
** File description:
** bootstrap
*/

#include "server.h"

char *strlowcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] > 64 && str[i] < 91)
            str[i] = str[i] + 32;
    }
    return str;
}

char *get_arg(char *input)
{
    char *new = malloc(sizeof(char) * (strlen(input) + 1));
    int index = 0;
    int spaces = 0;
    int end = strlen(input);

    for (int i = 0; i < end; i++) {
        if (spaces > 1)
            return (NULL);
        if (input[i] == ' ' && input[i + 1] != '\0')
            spaces++;
        if (spaces == 1 && input[i] != ' ') {
            new[index] = input[i];
            index++;
        }
    }
    return (new);
}

char *get_command(char *input)
{
    char *new = malloc(sizeof(char) * (strlen(input) + 1));
    int index = 0;
    int end = strlen(input);

    for (int i = 0; i < end; i++) {
        if (input[i] == ' ')
            return (new);
        new[index] = input[i];
        index++;
    }
    return (new);
}

void chomp(char *string)
{
    if (string[0] == 'P' && string[1] == 'A' &&
    string[2] == 'S' && string[3] == 'S')
        return;
    while (*string && *string != '\n'
    && *string != '\r') {
        string++;
    }
    *string = 0;
    return;
}