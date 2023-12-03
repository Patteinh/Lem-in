/*
** EPITECH PROJECT, 2022
** check_error.c
** File description:
** check error anthill
*/

#include <stdio.h>
#include <stdbool.h>
#include "lemin.h"

static int nb_separator(char *str, char c)
{
    int nb = 0;

    for (int i = 0; str[i]; i++)
        nb += str[i] == c ? 1 : 0;
    return (nb);
}

static int check_essential(char **anth)
{
    int check = 0;

    check += !my_str_is_num(anth[0]) ? 1 : 0;
    return (check == 1 ? SUCCESS : ERROR);
}

static int check_valid_room(char **anth)
{
    for (int i = 1; anth[i] && anth[i][1] != '-'; i++) {
        if (!my_strcmp(anth[i], "##start") || !my_strcmp(anth[i], "##end"))
            continue;
        if (my_lenarray(my_str_to_array(anth[i], " ")) != 3 ||
        my_str_is_valid(anth[i], ROOM) || nb_separator(anth[i], ' ') != 2)
            return (ERROR);
    }
    return (SUCCESS);
}

static int check_valid_tunnel(char **anth)
{
    int i = 0;

    for (;  anth[i] && anth[i][1] != '-'; i++);
    for (; anth[i]; i++) {
        if (my_lenarray(my_str_to_array(anth[i], "-")) != 2 ||
        my_str_is_valid(anth[i], TUNNEL) || nb_separator(anth[i], '-') != 1)
            return (ERROR);
    }
    return (SUCCESS);
}

int check_anthill(char **anth, bool *error)
{
    int (*check_error[])(char **anth) =
    {check_essential, check_valid_room, check_valid_tunnel};

    for (int i = 0; i != 3; i++)
        if ((check_error[i])(anth) == ERROR)
            return ((*error) = true);
    return ((*error) = false);
}
