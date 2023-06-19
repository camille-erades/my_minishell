/*
** EPITECH PROJECT, 2022
** B-PSU-200-LYN-2-1-minishell2-camille.erades
** File description:
** show_env.c
*/

#include "../include/mysh.h"

int show_my_env(env_m *envm)
{
    for (int i = 0; envm->env2[i] != NULL; i++){
        my_putstr(envm->env2[i]);
        write(1, "\n", 1);
    }
}
