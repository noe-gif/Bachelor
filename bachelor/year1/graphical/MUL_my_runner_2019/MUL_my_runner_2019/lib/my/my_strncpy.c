/*
** EPITECH PROJECT, 2019
** my_strncpy
** File description:
** scp
*/

char *my_strncpy(char *dest, char const *src)
{
    int i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i = i + 1;
    }
    if (src[i] == '\0'){
        dest[i] = '\0';
    }
    return (dest);
}
