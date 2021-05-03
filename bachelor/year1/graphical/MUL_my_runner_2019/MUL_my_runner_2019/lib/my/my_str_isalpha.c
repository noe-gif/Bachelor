/*
** EPITECH PROJECT, 2019
** my_str_isalpha
** File description:
** isalpha
*/

int my_str_isalpha(char const *str)
{
    int cnt = 0;

    while (str[cnt] != '\0') {
        if ((str[cnt] >= 65 && str[cnt] <= 90) ||
            (str[cnt] >= 97 && str[cnt] <= 122))
        {
            str++;
            return (1);
        }
        else
            return (0);
    }
    return (0);
}


