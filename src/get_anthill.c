/*
** EPITECH PROJECT, 2022
** get_anthill.c
** File description:
** get_anthill
*/

#include <stdlib.h>
#include <stdio.h>
#include "lemin.h"

static void change_line(char **line, int i)
{
    for (; (*line)[i] == '#' || (*line)[i - 1] == ' '; i--);
    (*line)[i] = '\n';
    (*line)[i + 1] = '\0';
}

static int check_line(char **line)
{
    if ((*line)[0] == '#' && (*line)[1] != '#')
        return (true);
    if ((*line)[0] == '#' && (*line)[1] == '#')
        return (false);
    for (int i = 0; (*line)[i]; i++)
        if ((*line)[i] == '#' && !my_is_char((*line)[i + 1]))
            change_line(line, i);
    return (false);
}

void get_anthill(char ***map, bool *error)
{
    size_t len;
    char *line = NULL;
    char *tmp = NULL;
    char *buffer = NULL;

    while (getline(&line, &len, stdin) != - 1) {
        tmp = buffer;
        if (check_line(&line))
            continue;
        buffer = (!buffer) ? my_strdup(line) : my_strcat(buffer, line);
        free(tmp);
    }
    (*map) = my_str_to_array(buffer, "\n");
    (*error) = !(*map) ? true : false;
    free(line);
    free(buffer);
}
