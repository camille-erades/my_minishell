/*
** EPITECH PROJECT, 2022
** B-PSU-200-LYN-2-1-minishell1-camille.erades
** File description:
** dup_env.c
*/

#include <stdio.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include "../include/mysh.h"

char **dup_env(char **env, int num)
{
    int y = 0, x = 0, j = 0;
    char **env2;
    for (y; env[y] != NULL; y++);
    env2 = malloc(sizeof(char *) * (y + 2));
    env2[y] = NULL;
    y = 0;
    for (y; env[y] != NULL; y++){
        env2[y] = malloc(sizeof(char) * (my_strlen(env[y]) + 1));
        env2[y] = my_strcpy(env[y]);
    }
    return env2;
}
