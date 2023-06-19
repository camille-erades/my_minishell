/*
** EPITECH PROJECT, 2022
** B-PSU-200-LYN-2-1-minishell1-camille.erades
** File description:
** my_free.c
*/

#include <stddef.h>
#include <stdlib.h>
#include "../include/mysh.h"

int super_free(char **tabl)
{
    for (int i = 0; tabl[i] != NULL; i++){
        free(tabl[i]);
    }
    free(tabl);
}
