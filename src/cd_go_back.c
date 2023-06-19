/*
** EPITECH PROJECT, 2022
** B-PSU-200-LYN-2-1-minishell1-camille.erades
** File description:
** cd_go_back.c
*/

#include <linux/limits.h>
#include <unistd.h>
#include "../include/mysh.h"

int cd_go_back(env_m *envm, int oldpwd_posi, int pwd_posi, char **cd_path)
{
    if (cd_path[1][0] == '-'){
        char pwd[PATH_MAX];
        char oldpwd[PATH_MAX];
        getcwd(oldpwd, PATH_MAX);
        chdir(envm->env2[oldpwd_posi] + 7);
        getcwd(pwd, PATH_MAX);
        change_pwd(envm, "PWD=", pwd, pwd_posi);
        change_pwd(envm, "OLDPWD=", oldpwd, oldpwd_posi);
        return 0;
    }
    return 1;
}
