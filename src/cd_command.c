/*
** EPITECH PROJECT, 2022
** B-PSU-200-LYN-2-1-minishell1-camille.erades
** File description:
** cd_command.c
*/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <linux/limits.h>
#include <unistd.h>
#include <errno.h>
#include "../include/mysh.h"

int move_or_error(char *cd_path)
{
    unsigned long mv_er;
    int y = my_strlen(cd_path);
    errno = 0;
    mv_er = chdir(cd_path);
    if (mv_er == -1 && errno == ENOTDIR){
        write(2, cd_path, y);
        write(2, ": Not a directory.\n", 19);
    }
    if (mv_er == -1 && errno == EACCES){
        write(2, cd_path, y);
        write(2, ": Permission denied.\n", 21);
    }
    if (mv_er == -1 && errno == ENOENT){
        write(2, cd_path, y);
        write(2, ": No such file or directory.\n", 29);
    }
}

int find_pwd(env_m *envm, char *wanted_pwd)
{
    for (int i = 0; envm->env2[i] != NULL; i++){
        if (my_str_compare(envm->env2[i], wanted_pwd) == 1){
            return i;
        }
    }
    return 0;
}

int change_pwd(env_m *envm, char *name, char *value, int chang_posi)
{
    int size = my_strlen(my_cd_strcat(name, value));
    if (chang_posi > 0){
        free(envm->env2[chang_posi]);
        envm->env2[chang_posi] = malloc(sizeof(char) * size + 1);
        envm->env2[chang_posi] = my_cd_strcat(name, value);
    }
}

int cd_command(char *buffer, env_m *envm)
{
    char **cd_path = my_str_to_word_array(buffer, ' ');
    char pwd[PATH_MAX];
    int pwd_posi = find_pwd(envm, "PWD="), y;
    char oldpwd[PATH_MAX];
    int oldpwd_posi = find_pwd(envm, "OLDPWD=");
    if (my_str_compare(buffer, "cd")){
        if (cd_go_back(envm, oldpwd_posi, pwd_posi, cd_path) == 0)
            return 0;
        getcwd(oldpwd, PATH_MAX);
        move_or_error(cd_path[1]);
        getcwd(pwd, PATH_MAX);
        change_pwd(envm, "OLDPWD=", oldpwd, oldpwd_posi);
        change_pwd(envm, "PWD=", pwd, pwd_posi);
        super_free(cd_path);
        return 0;
    }
    return 1;
}
