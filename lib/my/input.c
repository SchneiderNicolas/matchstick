/*
** EPITECH PROJECT, 2020
** matchstick
** File description:
** input
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "my.h"

int input(void)
{
    char *input = NULL;
    size_t len = 0;
    if (getline(&input, &len, stdin) == -1)
        return -777;
    for (int i = 0; input[i]; i++) {
        if (input[i] > '9' || input[i] < '0' && input[i] != '\n')
            return (-666);
    }
    int nb = my_getnbr(input);
    free(input);
    return (nb);
}