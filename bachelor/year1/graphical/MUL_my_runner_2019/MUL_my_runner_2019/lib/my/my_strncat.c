/*
** EPITECH PROJECT, 2019
** my_strncat
** File description:
** cat
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

char *my_strncat(char *dest, char const *src, int nb)
{
    int cnt_dest = my_strlen(dest);
    int cnt_src = 0;

    while (cnt_src < nb && src[cnt_src] != '\0')
    {
        dest[cnt_dest] = src[cnt_src];
        cnt_src++;
        cnt_dest++;
    }
    dest[cnt_dest] = '\0';
    return (dest);
}
