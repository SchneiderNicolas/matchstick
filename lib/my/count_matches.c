/*
** EPITECH PROJECT, 2020
** matchstick
** File description:
** count_matches
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "my.h"
#include "struct.h"

int count_matches(char **game_board, int line)
{
    int count = 0;

    for (int i = 0; game_board[line][i]; i++) {
        if (game_board[line][i] == '|')
            count += 1;
    }
    return (count);
}