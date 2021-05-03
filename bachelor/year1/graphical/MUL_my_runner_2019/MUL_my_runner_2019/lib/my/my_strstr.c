/*
** EPITECH PROJECT, 2019
** my_strstr
** File description:
** jioz
*/

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int n = 0;

    while (str[i] != '\0') {

        if (str[i] != to_find[n]) {
            i++;
            n++;
        }

        else
            return (0);
    }
}

