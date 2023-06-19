/*
** EPITECH PROJECT, 2022
** B-PSU-200-LYN-2-1-minishell1-camille.erades
** File description:
** segfault.c
*/

#include <sys/types.h>
#include <sys/wait.h>
#include <sys/signal.h>
#include <unistd.h>
#include "../include/mysh.h"

void my_segfault(int status)
{
    if (WIFSIGNALED(status)){
        if (WTERMSIG(status) == SIGSEGV)
            write(2, "Segmentation fault\n", 19);
        if (WTERMSIG(status) == SIGFPE)
            write(2, "Floating exeption\n", 18);
    }
}
