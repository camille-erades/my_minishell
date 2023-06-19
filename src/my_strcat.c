/*
** EPITECH PROJECT, 2022
** cerades
** File description:
** my_strcat.c
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "../include/mysh.h"

char *my_cd_strcat(char *src1, char *src2)
{
    int dest_len = my_strlen(src1) + my_strlen(src2);
    int i;
    char *dest;
    dest = malloc(sizeof(char) * (dest_len + 1));
    for (i = 0 ; src1[i] != '\0'; i++){
        dest[i] = src1[i];
    }
    for (int y = 0; src2[y] != '\0'; y++){
        dest[i] = src2[y];
        i++;
    }
    dest[i + 1] = '\0';
    return dest;
}

char *my_strcat(char *src1, char *src2)
{
    int dest_len = my_strlen(src1) + my_strlen(src2);
    int i;
    char *dest;
    dest = malloc(sizeof(char) * (dest_len + 2));
    for (i = 0 ; src1[i] != '\0'; i++){
        dest[i] = src1[i];
    }
    dest[i] = '/';
    i++;
    for (int y = 0; src2[y] != '\0'; y++){
        dest[i] = src2[y];
        i++;
    }
    dest[i + 1] = '\0';
    return dest;
}

char *my_env_strcat(char *src1, char *src2)
{
    int dest_len = my_strlen(src1) + my_strlen(src2);
    int i;
    char *dest;
    dest = malloc(sizeof(char) * (dest_len + 2));
    for (i = 0 ; src1[i] != '\0'; i++){
        dest[i] = src1[i];
    }
    for (int y = 0; src2[y] != '\0'; y++){
        dest[i] = src2[y];
        i++;
    }
    dest[i + 1] = '\0';
    return dest;
}
