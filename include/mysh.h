/*
** EPITECH PROJECT, 2022
** B-PSU-200-LYN-2-1-minishell1-camille.erades
** File description:
** mysh.h
*/

#ifndef MYSH_H_
    #define MYSH_H_
    #include <stdio.h>
    #include <unistd.h>
    #include <stddef.h>
    #include <stdlib.h>
    #include <sys/wait.h>
    #include <string.h>
    typedef struct my_env {
        char **env2;
    } env_m;
    int cd_command(char *buffer, env_m *envm);
    int change_pwd(env_m *envm, char *name, char *value, int chang_posi);
    int find_pwd(env_m *envm, char *wanted_pwd);
    int move_or_error(char *cd_path);
    char **dup_env(char **env, int num);
    char *my_clean_str(char *str);
    int super_free(char **tabl);
    void my_putchar(char c);
    void my_putnbr(int nb);
    int my_putstr(char const *str);
    int terminal(env_m *envm, int argc, char **argv);
    int exe_command(char **cmd, char *absolut_path, env_m *envm, char *buffer);
    char *use_path(char **locat, char *cmd);
    char **find_path(env_m *envm, char *pathstart);
    char *my_strcat(char *src1, char *src2);
    char *my_cd_strcat(char *src1, char *src2);
    int my_str_compare(char *str, char *str2);
    char *my_strcpy(char const *src);
    int my_strlen(char const *str);
    char **my_str_to_word_array(char *str, char separator);
    void mallocline(char *str, char **arr, char separator);
    int countline(char *str, char separator);
    void my_segfault(int status);
    int cd_go_back(env_m *envm, int oldpwd_posi, int pwd_posi, char **cd_path);
    int set_or_unset_env(char **cmd, env_m *envm);
    int my_unsetenv(char **cmd, env_m *envm);
    int my_setenv(char **cmd, env_m *envm);
    int find_path_env(env_m *envm, char *pathstart);
    int show_my_env(env_m *envm);
    char *my_env_strcat(char *src1, char *src2);
    int no_exist(env_m *envm, char **cmd, int i, char **newenv);
    int exist(env_m *envm, char **cmd, int ln, char **newenv);
    int check_args(char **cmd);
    char **dup_unsetenv(char **env, int passline);
    int do_tty_things(env_m *envm);
    int verif_setenv_args(char **cmd);
#endif /* !MYSH_H_ */
