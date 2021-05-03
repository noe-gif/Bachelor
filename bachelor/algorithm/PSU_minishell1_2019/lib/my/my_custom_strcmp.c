/*
** EPITECH PROJECT, 2020
** custom_strcmp
** File description:
** lib
*/

#include <stdio.h>

int custom_strcmp(char *string1, char *string2)
{
    int i = 0;
    int flag = 0;

    while (flag == 0) {
        if (string1[i] > string2[i])
            flag = 1;
        else if (string1[i] < string2[i])
            flag = -1;
        if (string1[i] == '\0')
            break;
        i++;
    }
    return (flag);
}
