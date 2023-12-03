/*
** EPITECH PROJECT, 2022
** my_str_is_valid.c
** File description:
** string have good characters for lemin anthill
*/

static int check_str_room(char *s)
{
    for (int i = 0; s[i]; i++) {
            if ((s[i] >= 48 && s[i] <= 57) || (s[i] == 32) || (s[i] == 45))
                continue;
        return (84);
        }
    return (0);
}

static int check_str_tunnels(char *s)
{
    for (int i = 0; s[i]; i++) {
            if ((s[i] >= 48 && s[i] <= 57) || (s[i] == 45))
                continue;
        return (84);
        }
    return (0);
}

int my_str_is_valid(char *s, int choice)
{
    if (choice == 0)
        return (check_str_room(s));
    else
        return (check_str_tunnels(s));
}
