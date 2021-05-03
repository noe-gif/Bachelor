/*
** EPITECH PROJECT, 2019
** itoa
** File description:
** itoa
*/

#include <stdlib.h>
#include <unistd.h>

char *my_itoa(int num)
{
    int count = 0;
    char *str;
    int n = num;

    while (n > 10) {
        n = n/10;
        count++;
    }
    str = malloc(sizeof(*str) * (count + 1));
    str[count] = '\0';
    while (count >= 0) {
        str[count] = num % 10 + '0';
        n = n /10;
        count--;
    }
    return (str);
}
