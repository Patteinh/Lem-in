/*
** EPITECH PROJECT, 2022
** my_is_char.c
** File description:
** char is an alphabetical character
*/

int my_is_char(char c)
{
    if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
        return (0);
    return (1);
}
