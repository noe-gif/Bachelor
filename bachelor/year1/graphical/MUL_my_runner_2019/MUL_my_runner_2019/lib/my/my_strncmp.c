/*
** EPITECH PROJECT, 2019
** my_strncmp
** File description:
** jdeioz
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    n = 0;
    int i = 0;

    while ((s1[n] == s2[n] && (s1[n] != '\0' && s2[n] != '\0')))
        i++;
    return (s1[n] - s2[n]);
}
