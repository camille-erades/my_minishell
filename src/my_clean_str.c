/*
** EPITECH PROJECT, 2022
** B-PSU-200-LYN-2-1-minishell1-camille.erades
** File description:
** my_clean_str.c
*/

#include <stdio.h>
#include <stdlib.h>
#include "../include/mysh.h"

char *my_clean_str(char *str)
{
    char *clean_str = malloc(my_strlen(str) + 1);
    int i = 0, j = 0, x = 0;
    while (str[i] <= 32 && str[i] != '\0'){
        i++;
    }
    for (int y = i; str[y] != '\0'; y++){
        if (str[y] <= 32 && str[y + 1] <= 32)
            continue;
        if (str[y] < 31){
            clean_str[j] = ' ';
        } else {
            clean_str[j] = str[y];
        }
        j++;
    }
    clean_str[j] = '\0';
    return clean_str;
}
