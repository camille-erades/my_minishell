/*
** EPITECH PROJECT, 2022
** B-PSU-200-LYN-2-1-minishell2-camille.erades
** File description:
** do_tty_things.c
*/

#include "../include/mysh.h"

int do_tty_things(env_m *envm)
{
    char **cmd;
    char *token;
    char *absolut_path;
    char *buffer = NULL;
    int exit = 0;
    size_t size = 0;
    while (getline(&buffer, &size, stdin) != -1){
        token = strtok(buffer, ";");
        while (token != NULL){
            token = my_clean_str(token);
            cmd = my_str_to_word_array(token, ' ');
            exit = exe_command(cmd, absolut_path, envm, token);
            token = strtok(NULL, ";");
        }
    }
    return exit;
}
