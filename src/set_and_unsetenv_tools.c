/*
** EPITECH PROJECT, 2022
** B-PSU-200-LYN-2-1-minishell2-camille.erades
** File description:
** set_and_unsetenv_tools.c
*/

#include "../include/mysh.h"

int find_path_env(env_m *envm, char *pathstart)
{
    if (pathstart == NULL)
        return 1;
    for (int i = 0; envm->env2[i] != NULL; i++){
        if (my_str_compare(envm->env2[i], pathstart) == 1) {
            return i;
        }
    }
    return 0;
}

int no_exist(env_m *envm, char **cmd, int i, char **newenv)
{
    super_free(envm->env2);
    if (cmd[2] == NULL){
        newenv[i] = my_env_strcat(cmd[1], "=");
        envm->env2 = dup_env(newenv, 2);
        return 1;
    }
    newenv[i] = malloc(sizeof(char) *
    my_strlen(my_env_strcat(my_env_strcat(cmd[1], "="), cmd[2])));
    newenv[i] = my_env_strcat(my_env_strcat(cmd[1], "="), cmd[2]);
    envm->env2 = dup_env(newenv, 2);
}

int exist(env_m *envm, char **cmd, int ln, char **newenv)
{
    free(envm->env2[ln]);
    if (cmd[2] == NULL){
        envm->env2[ln] = my_env_strcat(cmd[1], "=");
        return 1;
    }
    envm->env2[ln] = malloc(sizeof(char) *
    my_strlen(my_env_strcat(cmd[1], cmd[2])));
    envm->env2[ln] = my_env_strcat(my_env_strcat(cmd[1], "="), cmd[2]);
}
