/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** cats
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

char *my_strcat(char *dest, char const *src)
{
    int cnt_dest = my_strlen(dest);
    int cnt_src = 0;

    while (src[cnt_src] != '\0')
    {
        dest[cnt_src] = src[cnt_src];
        cnt_src++;
        cnt_dest++;
    }
    dest[cnt_src] = '\0';
    return (dest);
}
