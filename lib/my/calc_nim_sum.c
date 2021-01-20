/*
** EPITECH PROJECT, 2020
** matchstick
** File description:
** calc_nim_sum
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "my.h"
#include "struct.h"

int calc_nim_sum(game_info_t *game_info)
{
    int nim_sum = 0;
    int count = 0;
    for (int i = 1; i < game_info->line + 1; i++) {
        for (int j = 0; game_info->game_board[i][j]; j++) {
            if (game_info->game_board[i][j] == '|')
                count += 1;
        }
        nim_sum = nim_sum ^ count;
        count = 0;
    }
    return nim_sum;
}