/*
** EPITECH PROJECT, 2022
** B-PSU-200-LYN-2-1-minishell2-camille.erades
** File description:
** verif_setenv_args.c
*/

#include "../include/mysh.h"

int verif_setenv_args(char **cmd)
{
    if (check_args(cmd) == 84){
        write(2,
        "setenv: Variable name must contain alphanumeric characters.\n", 60);
        return 84;
    }
    if (check_args(cmd) == -1){
        write(2, "setenv: Variable name must begin with a letter.\n", 48);
        return -1;
    }
    return 0;
}
