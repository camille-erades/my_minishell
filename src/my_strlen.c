/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** my_strlen.c
*/

#include "../include/mysh.h"

int my_strlen(char const *str)
{
    int i;

    i = 0;
    if (str == NULL)
        return 0;
    while (str[i] != '\0'){
        i++;
    }
    return (i);
}
