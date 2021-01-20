/*
** EPITECH PROJECT, 2020
** matchstick
** File description:
** game_finish
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "my.h"
#include "struct.h"

int game_finish(char **game_board, int line)
{
    for (int i = 1; i < line + 2; i++) {
        for (int j = 0; game_board[i][j]; j++) {
            if (game_board[i][j] == '|')
                return 0;
        }
    }
    return 1;
}