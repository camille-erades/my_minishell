/*
** EPITECH PROJECT, 2022
** minishell1bs
** File description:
** mysh.c
*/

#include "../include/mysh.h"

char **find_path(env_m *envm, char *pathstart)
{
    char **path;
    for (int i = 0; envm->env2[i] != NULL; i++){
        if (my_str_compare(envm->env2[i], pathstart) == 1) {
            path = my_str_to_word_array(envm->env2[i] + 5, ':');
            break;
        }
    }
    return path;
}

char *use_path(char **locat, char *cmd)
{
    char *way;
    int y = my_strlen(cmd);
    if (access(cmd, X_OK) != -1){
        way = my_strcpy(cmd);
        return way;
    }
    for (int i = 0; locat[i] != NULL; i++){
        way = my_strcat(locat[i], cmd);
        if (access(way, X_OK) != -1)
            return way;
        free(way);
    }
    if (cmd[0] == '\0'){
        return NULL;
    } else {
        write(2, cmd, y);
        write(2, ": Command not found.\n", 21);
        return NULL;
    }
}

int exe_command(char **cmd, char *absolut_path, env_m *envm, char *buffer)
{
    int status;
    char **paths;
    pid_t pid;
    if (set_or_unset_env(cmd, envm) == 0)
        return 0;
    paths = find_path(envm, "PATH=");
    if ((absolut_path = use_path(paths, cmd[0])) == NULL)
        return 1;
    if (cd_command(buffer, envm) == 0)
        return 0;
    pid = fork();
    if (pid == 0){
        execve(absolut_path, cmd, envm->env2);
        exit(0);
    } else {
        wait(&status); my_segfault(status);
        return WEXITSTATUS(status);
    }
}

int terminal(env_m *envm, int argc, char **argv)
{
    char *buffer = NULL;
    size_t size = 0;
    char **cmd = NULL;
    char *absolut_path;
    char *token;
    while (1){
        my_putstr("$> ");
        if (getline(&buffer, &size, stdin) == EOF){
            my_putstr("exit\n");
            break;
        }
        token = strtok(buffer, ";");
        while (token != NULL){
            token = my_clean_str(token);
            cmd = my_str_to_word_array(token, ' ');
            exe_command(cmd, absolut_path, envm, token);
            token = strtok(NULL, ";");
        }
    }
}

int main(int argc, char **argv, char **env)
{
    int exit;
    env_m *envm = malloc(sizeof(env_m));
    envm->env2 = dup_env(env, 2);
    if (isatty(0) == 0){
        exit = do_tty_things(envm);
        return exit;
    }
    terminal(envm, argc, argv);
}
