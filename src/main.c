/*
** EPITECH PROJECT, 2022
** main
** File description:
** main
*/

#include "lemin.h"

static int free_all(lem_t *lem)
{
    lem->map ? my_free_array(lem->map) : 0;
    return (lem->error);
}

static void print_anthill(char **anth)
{
    int i = 1;

    my_putstr("#number_of_ants\n");
    my_printf("%s\n", anth[0]);
    my_putstr("#rooms\n");
    for (; anth[i] && anth[i][1] != '-'; i++)
        my_printf("%s\n", anth[i]);
    my_putstr("#tunnels\n");
    for (; anth[i]; i++)
        my_printf("%s\n", anth[i]);
    my_putstr("#moves\n");
}

static int lemin(void)
{
    lem_t lem;

    get_anthill(&lem.map, &lem.error);
    check_anthill(lem.map, &lem.error);
    if (lem.error == true)
        return (free_all(&lem));
    print_anthill(lem.map);
    return (free_all(&lem));
}

int main(int ac, char **av)
{
    (void)av;
    if (ac == 1)
        return (!lemin() ? (SUCCESS) : (ERROR));
    return (ERROR);
}
