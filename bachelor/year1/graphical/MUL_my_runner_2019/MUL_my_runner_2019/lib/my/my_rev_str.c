/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** rev
*/

int my_strlen(char const *str);

char *my_rev_str(char *str)
{
    int i = 0;
    int e = my_strlen(str) - 1;
    char c;

    while (i < my_strlen(str) / 2)
    {
        c  = str[i];
        str[i] = str[e];
        str[e] = c;
        i++;
        e--;
    }
    return (str);
}
