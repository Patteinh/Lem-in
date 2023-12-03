/*
** EPITECH PROJECT, 2022
** my_putstr_array
** File description:
** print line array
*/

#include "my.h"

void my_parray(char **array)
{
    while (*array)
        my_printf("%s\n", *array++);
}
