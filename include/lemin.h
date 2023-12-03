/*
** EPITECH PROJECT, 2022
** lemin.h
** File description:
** lemin.h
*/

#include <stdbool.h>
#include "my.h"

#ifndef _LEMIN_H_
    #define _LEMIN_H_

typedef struct lem_s {
    bool error;
    int nb_ant;
    char **map;
} lem_t;

void get_anthill(char ***map, bool *error);
int check_anthill(char **anth, bool *error);

static const int SUCCESS = 0;
static const int FAILURE = 1;
static const int ERROR = 84;
static const int TUNNEL = 1;
static const int ROOM = 0;

#endif
