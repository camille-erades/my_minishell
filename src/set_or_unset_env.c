/*
** EPITECH PROJECT, 2022
** B-PSU-200-LYN-2-1-minishell2-camille.erades
** File description:
** set_or_unset_env.c
*/

#include "../include/mysh.h"

int check_args(char **cmd)
{
    if (cmd[1][0] >= 48 & cmd[1][0] <= 57)
        return -1;
    for (int j = 0; cmd[1][j] != '\0'; j++){
        if (cmd[1][j] >= 48 & cmd[1][j] <= 57 || cmd[1][j] >= 65 &
        cmd[1][j] <= 90 || cmd[1][j] >= 97 & cmd[1][j] <= 122)
            continue;
        else
            return 84;
    }
    return 0;
}

int my_setenv(char **cmd, env_m *envm)
{
    int ln = find_path_env(envm, cmd[1]), argnum = 0, i;
    char **newenv = dup_env(envm->env2, 2);
    for (argnum; cmd[argnum] != NULL; argnum++);
    for (i = 0; newenv[i] != NULL; i++);
    if (argnum == 1){
        show_my_env(envm);
        return 1;
    }
    if (ln == 0){
        if (verif_setenv_args(cmd) != 0)
            return 84;
        no_exist(envm, cmd, i, newenv);
    } else
        exist(envm, cmd, ln, newenv);
}

char **dup_unsetenv(char **env, int passline)
{
    int y = 0, x = 0, j = 0;
    char **env2;
    for (y; env[y] != NULL; y++);
    env2 = malloc(sizeof(char *) * (y));
    env2[y - 1] = NULL;
    y = 0;
    for (y; env[y] != NULL; y++){
        if (y == passline)
            continue;
        env2[x] = malloc(sizeof(char) * (my_strlen(env[y]) + 1));
        env2[x] = my_strcpy(env[y]);
        x++;
    }
    return env2;
}

int my_unsetenv(char **cmd, env_m *envm)
{
    int ln = find_path_env(envm, cmd[1]);
    char **newenv;
    if (cmd[1] == NULL || ln == 0){
        return 0;
    } else {
        newenv = dup_unsetenv(envm->env2, ln);
        super_free(envm->env2);
        envm->env2 = newenv;
    }
}

int set_or_unset_env(char **cmd, env_m *envm)
{
    if (my_str_compare(cmd[0], "env")){
        show_my_env(envm);
        return 0;
    }
    if (my_str_compare(cmd[0], "setenv") == 1){
        my_setenv(cmd, envm);
        return 0;
    } else if (my_str_compare(cmd[0], "unsetenv") == 1){
        my_unsetenv(cmd, envm);
        return 0;
    }
    return 1;
}
