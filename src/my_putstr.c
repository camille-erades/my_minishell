/*
** EPITECH PROJECT, 2022
** task02
** File description:
** my_putstr
*/

#include "../include/mysh.h"

int my_putstr(char const *str)
{
    int i;

    i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
    return i;
}
