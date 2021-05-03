/*
** EPITECH PROJECT, 2019
** my_str_isnum
** File description:
** isnum
*/

int my_str_isnum(char const *str)
{
    int cnt = 0;

    while (str[cnt] != '\0') {
        if ((str[cnt] >= 48 && str[cnt] <= 57))
        {
            str++;
            return (1);
        }
        else
            return (0);
    }
    return (0);
}
