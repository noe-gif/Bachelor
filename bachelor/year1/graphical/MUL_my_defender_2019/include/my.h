/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include <unistd.h>

struct info_param *my_params_to_array(int ac, char **av);

char *my_strcat(char *dest, char const *src);
char *my_itoa(int num);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_put_nbr(int nb);
int my_strlen(char const *str);
int my_getnbr(char const *str);

#endif /* MY_H_ */
