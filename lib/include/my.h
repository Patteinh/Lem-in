/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** lib.h
*/

#ifndef _MY_H_
    #define _MY_H_

void my_putchar(char c);
void my_putstr(const char *str);
void my_perror(const char *str);
int  my_strlen(const char *str);
int  my_lenarray(char **array);
int  my_putnbr(int nb);
int  my_strlen(const char *str);
char *my_strcat(const char *left, const char *right);
char *my_strcpy(char *dest, const char *src);
char *my_strdup(const char *src);
void my_printf(const char *str, ...);
int  my_strcmp(char const *s1, const char *s2);
char **my_str_to_array(char *str, const char *d);
int  my_is_char(char c);
int  my_str_is_num(char *str);
int  my_str_is_valid(char *s, int choice);
void my_parray(char **array);
void my_free_array(char **array);

#endif
