/*
** EPITECH PROJECT, 2022
** my_is_num.c
** File description:
** check if sting only have numbers
*/

int my_str_is_num(char *str)
{
    if (str[0] == '\0')
        return (84);
    for (int i = 0; str[i]; i++)
        if (str[i] < '0' || str[i] > '9')
            return (84);
    return (0);
}
