/*
** EPITECH PROJECT, 2020
** matchstick
** File description:
** main.c
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "include/my.h"
#include "include/struct.h"

int main(int argc, char *argv[])
{
    if (argc != 3)
        return 84;
    if (my_getnbr(argv[1]) > 99 || my_getnbr(argv[1]) < 1)
        return 84;
    if (my_getnbr(argv[2]) <= 0)
        return 84;
    return (start_game(argv));
}